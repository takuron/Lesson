n=1
while True:
    if int((n+150)**0.5)**2 == (n+150) and \
        int((n+150+136)**0.5)**2 == (n+150+136):
        print(n)
        break
    n=n+1