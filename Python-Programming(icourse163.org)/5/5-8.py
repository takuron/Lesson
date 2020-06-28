n = int(input())

slist = []
for i in range(2,n):
    iss = False
    for ii in range(2,i):
        if i%ii == 0:
            iss = True
            break;
    if not iss:
        slist.append(i)

print(slist)
            