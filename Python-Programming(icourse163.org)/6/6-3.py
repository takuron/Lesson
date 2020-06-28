# MOOC-Python Task
# takuron@github

def lcm(n1,n2) :
    maxx = 0
    if n1>=n2:
        maxx = n1
    else:
        maxx = n2
        
    i = 0
    while 1 :
        i = i+1
        if ((maxx+i)%n1==0) and ((maxx+i)%n2==0):
           return maxx+i
        
num1=int(input(""))
num2=int(input(""))
print(lcm(num1,num2))