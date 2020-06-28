n = int(input())

def replace_char(string,char,index):
     string = list(string)
     string[index] = char
     return ''.join(string)

for i in range(2*n-1):
    strs = "+"*(2*n-1)
    strss = replace_char(strs,"X",i)
    strsss = replace_char(strss,"X",(2*n-2-i))
    print(strsss)