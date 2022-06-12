
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% MATLAB主函数程序
% 求函数y(x,y)=3cos(xy)+x+y的最小值
% x的取值范围为[-4,4],y的取值范围为[-4,4]
% 多个局部极值的函数
% 环境：MATLAB R2018a
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



function originalDE()
% 初始化参数设置
clear;
clc;
NP = 20;     % 种群数量
D = 2;       % 变量的维数
G = 500;     % 最大进化代数
F = 0.5;     % 变异算子
CR = 0.1;    % 交叉算子
Xs = 4;      % 变量上限
Xx = -4;     % 变量下限
t0 = cputime;
 
x = zeros(D,NP);           % 初始种群
v = zeros(D,NP);           % 变异种群
u = zeros(D,NP);           % 选择种群
x = rand(D,NP)*(Xs-Xx)-Xs; % 赋初值

% 计算适应度函数值
for m = 1:NP
    Ob(m) = func2(x(:,m));
end
trace(1) = max(Ob);
% 差分操作
for gen = 1:G
    % 变异操作
    % r1,r2,r3和m互不相同
    for m = 1:NP
        r1 = randi([1,NP],1,1);
        while(r1 == m)
            r1 = randi([1,NP],1,1);
        end
        r2 = randi([1,NP],1,1);
        while(r2 == m)|(r2 == r1)
            r2 = randi([1,NP],1,1);
        end
        r3 = randi([1,NP],1,1);
        while((r3 == m)|(r3 == r1)|(r3 == r2))
            r3 = randi([1,NP],1,1);
        end
        v(:,m) = x(:,r1)+F*(x(:,r2)-x(:,r3)); % 改进使用特征向量替换
    end
    
    % 交叉操作
    r = randi([1,NP],1,1);
    for n = 1:D
        cr = rand(1);
        if(cr>CR)|(n == r)
            u(n,:) = v(n,:);
        else
            u(n,:) = x(n,:);
        end
    end
    
    % 边界条件处理
    % 边界吸收
    for n = 1:D
        for m = 1:NP
            if u(n,m)<Xx
                u(n,m) = Xx;
            end
            if u(n,m)>Xs
                u(n,m) = Xs;
            end
        end
    end
    % 选择操作
    for m = 1:NP
        Ob1(m) = func2(u(:,m));
    end
    
    for m = 1:NP
        if Ob1(m)>Ob(m)        % 小于先前的目标值
            x(:,m) = u(:,m);
        end
    end
    for m = 1:NP
        Ob(m) = func2(x(:,m));
    end
    trace(gen+1) = max(Ob);
end

[SortOb,Index] = sort(Ob);
x = x(:,Index);                % 最优变量
X = x(:,1);                    % 最优值
Y = min(Ob);
disp('最优变量');
disp(X);
disp('最优值');
disp(Y);
% 绘图
figure
plot(trace);
%plot(X,Y,'-ro');
xlabel('迭代次数');
ylabel('目标函数值');
title('DE目标函数曲线');
fprintf('DE所耗时间为：%f\n',cputime - t0);

end

function outp = func2(x)
    outp = 3*cos(x(1)*x(2))+x(1)+x(2);
end
