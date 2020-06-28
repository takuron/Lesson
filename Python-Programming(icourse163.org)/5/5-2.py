astr = str(input())
bstr = str(input())

aset = set(astr)
bset = set(bstr)

cset = aset|bset

print(sorted(cset))