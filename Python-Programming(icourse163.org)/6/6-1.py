# MOOC-Python Task
# takuron@github

def fbnq(n):
    n1 = 0
    n2 = 1
    for i in range(n) :
        n1,n2 = n2,n1+n2
    return n1

n=int(input(""))
print(fbnq(n))