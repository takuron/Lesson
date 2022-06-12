clear all
clc

bn=22;   %个体串长度
inn=50;   %初始种群大小
gnmax=500;    %最大代数
pc=0.75;   %交叉概率
pm=0.05;   %变异概率
%产生初始种群
s=round(rand(inn,bn));
%计算适应度,返回适应度f和累积概率p
[f,p]=objf(s);  

gn=1;
while gn<gnmax+1
   for j=1:2:inn
      %选择操作
      seln=sel(s,p);
      %交叉操作
      scro=cro(s,seln,pc);
      scnew(j,:)=scro(1,:);
      scnew(j+1,:)=scro(2,:);
      %变异操作
      smnew(j,:)=mut(scnew(j,:),pm);
      smnew(j+1,:)=mut(scnew(j+1,:),pm);
   end
   s=smnew;  %产生了新的种群
   %计算新种群的适应度   
   [f,p]=objf(s);
   %记录当前代最好和平均的适应度
   [fmax,nmax]=max(f);
   fmean=mean(f);
   ymax(gn)=fmax;
   ymean(gn)=fmean;

   %记录当前代的最佳个体
   x=n2to10(s(nmax,:));
   xx=-1.0+x*3/(power(2,bn)-1);
   xmax(gn)=xx;  
   gn=gn+1
end
gn=gn-1;

%绘制曲线
subplot(2,1,1);
plot(1:gn,[ymax;ymean]);
title('历代适应度变化','fonts',10);
legend('最大适应度','平均适应度');
string1=['最终适应度',num2str(ymax(gn))];
gtext(string1);
subplot(2,1,2);
plot(1:gn,xmax,'r-');
legend('自变量');
string2=['最终自变量',num2str(xmax(gn))];
gtext(string2);



%计算适应度函数
function [f,p]=objf(s);
    [inn bn]=size(s);  %读取种群大小, 有inn个个体,个体长度为bn
    for i=1:inn
        x = n2to10(s(i,:));  %将二进制转换为十进制
        xx=-1.0+x*3/(power(2,bn)-1);  %转化为[-1,2]区间的实数
        f(i)=ft(xx);  %计算函数值，即适应度
    end
    f=f';
    %计算选择概率
    fsum=0;
    for i=1:inn
        fsum=fsum+f(i)*f(i);
    end
    for i=1:inn
        ps(i)=f(i)*f(i)/fsum;
    end
    %计算累积概率
    p(1)=ps(1);
    for i=2:inn
        p(i)=p(i-1)+ps(i);
    end
    p=p';
end

function y=ft(x);
    y=x.*sin(10*pi*x)+2;
end

%“选择”操作
function seln=sel(s,p);
    inn=size(p,1);
    %从种群中选择两个个体
    for i=1:2
        r=rand;  %产生一个随机数
        prand=p-r;
        j=1;
        while prand(j)<0
            j=j+1;
        end
        seln(i)=j; %选中个体的序号
    end
end

function scro=cro(s,seln,pc);
    [inn bn]=size(s);
    if rand<pc
        chb=ceil(rand*(bn-1));  %在[1,bn-1]范围内随机产生一个交叉位
        scro(1,:)=[s(seln(1),1:chb) s(seln(2),chb+1:bn)];
        scro(2,:)=[s(seln(2),1:chb) s(seln(1),chb+1:bn)];
    else
        scro(1,:)=s(seln(1),:);
        scro(2,:)=s(seln(2),:);
    end 
end

%“变异”操作
function snnew=mut(snew,pm);
    bn=size(snew,2);
    snnew=snew;
    if rand<pm
        chb=ceil(rand*bn);  %在[1,bn]范围内随机产生一个变异位
        snnew(chb)=abs(snew(chb)-1);
    end

end

function x=n2to10(s);
    bn=size(s,2);
    x=s(bn);
    for i=1:bn-1
        x=x+s(bn-i)*power(2,i);
    end
end



