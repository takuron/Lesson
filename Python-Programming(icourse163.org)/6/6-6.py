# MOOC-Python Task
# takuron@github

def foo(alist):
    return alist[1::2]

alist=list(map(int,input().split()))
print(foo(alist))