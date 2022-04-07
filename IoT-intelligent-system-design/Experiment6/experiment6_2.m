clear all;
clc;

l = newfis('laundry_time');

l = addvar(l,'input','X',[0 100]);
l = addmf(l,'input',1,'SD','trimf',[0,0,50]);
l = addmf(l,'input',1,'MD','trimf',[0,50,100]);
l = addmf(l,'input',1,'LD','trimf',[50,100,100]);

l = addvar(l,'input','Y',[0 100]);
l = addmf(l,'input',2,'NG','trimf',[0,0,50]);
l = addmf(l,'input',2,'MG','trimf',[0,50,100]);
l = addmf(l,'input',2,'LG','trimf',[50,100,100]);

l = addvar(l,'output','Z',[0 60]);
l = addmf(l,'output',1,'VS','trimf',[0,0,10]);
l = addmf(l,'output',1,'S','trimf',[0,10,25]);
l = addmf(l,'output',1,'M','trimf',[10,25,40]);
l = addmf(l,'output',1,'L','trimf',[25,40,60]);
l = addmf(l,'output',1,'VL','trimf',[40,60,60]);

rulelist = [1 1 1 1 1;
            1 2 2 1 1;
            1 3 3 1 1;
            2 1 3 1 1;
            2 2 3 1 1;
            2 3 4 1 1;
            3 1 4 1 1;
            3 2 4 1 1;
            3 3 5 1 1];  
l = addrule(l,rulelist);

writefis(l,'laundry');

figure(1);
plotfis(l);
figure(2);
subplot(1,3,1);
plotmf(l,'input',1);
subplot(1,3,2);
plotmf(l,'input',2);
subplot(1,3,3);
plotmf(l,'output',1);

showrule(l);            %Show fuzzy rule base
ruleview('laundry');

