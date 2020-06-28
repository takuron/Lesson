alist=list(map(int,input().split()))
blist=list(map(int,input().split()))

clist=alist+blist
cset=set(clist)

print(sorted(list(cset)))