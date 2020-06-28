n=int(input())
m=int(input())

mlist=list(range(n))

result=[]

for i in range(n):
    for j in range(m-1):
        mlist.append(mlist.pop(0))
    result.append(mlist.pop(0))

print(result)