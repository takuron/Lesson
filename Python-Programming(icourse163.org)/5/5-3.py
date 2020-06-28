n = int(input())

suum = 0

for i in range(n+1):
    if i%7==0:
        suum = suum
    else:
        if (str(i).find('7'))==-1:
            suum = suum+i**2
        else :
            suum=suum
print(suum)
    