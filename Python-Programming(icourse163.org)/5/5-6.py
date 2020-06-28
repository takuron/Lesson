n = int(input())

ns=str(n)
sn="".join(reversed(ns))

if ns==sn :
    print("yes")
else:
    print("no")