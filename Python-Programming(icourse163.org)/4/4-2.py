alist=list(map(int,input().split()))

blist=alist[:len(alist)//2]
clist=alist[len(alist)//2:]
fset={'1':blist,'2':clist}

print(fset)