alist=list(map(int,input().split()))

rlist=[]
for i in alist:
    if i%2==0:
        rlist.append(i//2)
    else:
        rlist.append(i**2)
        
print(sorted(rlist))