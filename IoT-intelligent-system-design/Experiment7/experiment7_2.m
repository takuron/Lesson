err_goal=0.001; %误差最小值
lr=-0.9; %学习速率
max_epoch=10000; %训练最大次数
X=[0 0 1 1;0 1 0 1];
T=[0 1 1 1]; %训练集          
M=2; L=1; N=4; %2输入1输出，4训练对
W=rand(L,M); %权值初始
b=rand(L); %阈值初始
y=0;
for epoch=1:max_epoch 
   NET=W*X;
   for j=1:N         %N=4
     for i=1:L          %L=1
       if (NET(i,j)>=b(i)) y(i,j)=1;else y(i,j)=0;end  %激活函数
     end
   end
   E=(T-y);EE=0;  %计算误差
   for j=1:N;EE=EE+abs(E(j));end 
   if (EE<err_goal) break;end
   W=W+lr*E*X';
   b=b+sqrt(EE);  %调整输出层加权和阈值
end
epoch,W,b     %显示计算次数、加权系数和阈值

X1=[0 1 1 0;0 1 0 1];  %给定输入，计算各神经元输出
NETi=W*X1; 
[M,N]=size(X1);
for j=1:N  
  for i=1:L
    if (NETi(i,j)>=b(i)) y(i,j)=1;else y(i,j)=0;end
  end
end
y
