n = int(input())

for i in range(100,n+1):
    size=len(str(i))
    suum = 0
    for ie in range(size):
        suum = suum+int((str(i))[ie])**size
    if suum==i :
        print(i)
        