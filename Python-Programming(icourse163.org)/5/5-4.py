n = int(input())

for i in range(2,n+1):
    suum = 1
    for ii in range(2, i):
        if i%ii == 0:
            suum = suum+ii
    if suum==i:
        print(i)