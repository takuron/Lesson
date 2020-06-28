alist=list(map(int,input().split()))

print(sorted(alist, key=abs))