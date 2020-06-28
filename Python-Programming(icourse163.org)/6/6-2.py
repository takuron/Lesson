# MOOC-Python Task
# takuron@github

def hcf(n1,n2) :
    minn = 0
    if n1>=n2:
        minn = n2
    else:
        minn = n1
        
    for i in range(minn) :
        if (n1%(minn-i)==0) and (n2%(minn-i)==0):\
           return minn-i

num1=int(input(""))
num2=int(input(""))
print(hcf(num1,num2))