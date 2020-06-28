n = int(input())

strs = (" "*(n-1))+"+"
for i in range(n):
    print(strs)
    strs = (" "*(n-2-i))+"+"*(3+2*i)
    