# MOOC-Python Task
# takuron@github

def bubbleSort(alist):
    for i in range(len(alist)):
        for j in range(len(alist)-i-1):
            if alist[j] > alist[j+1]:
                alist[j],alist[j+1] = alist[j+1],alist[j]
    return alist

alist=list(map(int,input().split()))
print(bubbleSort(alist))