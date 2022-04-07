clear all;
clc;

a = newfis('fuzzy_tank');
a = addvar(a,'input','E',[-3 3]); %Parameter e
a = addmf(a,'input',1,'NB','zmf',[-3, -1]);
a = addmf(a,'input',1,'NS','trimf',[-3, -1, 1]);
a = addmf(a,'input',1,'PS','trimf',[-1,1,3]);
a = addmf(a,'input',1,'PB','smf',[1,3]);

a = addvar(a,'output','U',[-4,4]);  
a = addmf(a,'output',1,'NB','zmf',[-4, -2]);
a = addmf(a,'output',1,'NS','trimf',[-4, -2, 0]);
a = addmf(a,'output',1,'PS','trimf',[0 , 2, 4]);
a = addmf(a,'output',1,'PB','smf',[2,4]);

rulelist = [1 1 1 1;
            2 2 1 1;
            3 3 1 1;
            4 4 1 1];  %请将规则补充完整

a = addrule(a,rulelist);
a1=setfis(a,'DefuzzMethod','mom');  

writefis(a1,'tank');  %Save to fuzzy file "tank.fis"
a2=readfis('tank');

figure(1);
plotfis(a2);
figure(2);
plotmf(a,'input',1);
figure(3);
plotmf(a,'output',1);

flag=1;
if flag==1
	showrule(a)            %Show fuzzy rule base
	ruleview('tank');      %Dynamic Simulatio
end
for i=1:1:7
    e(i)=i-4;
    Ulist(i)=evalfis([e(i)],a2);
end
Ulist=round(Ulist)

e=-3;        % Error
u=evalfis([e],a2)   %Using fuzzy inference

