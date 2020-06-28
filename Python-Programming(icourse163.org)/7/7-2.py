import math

x = int(input())

sinn = math.sin(math.radians(15))
son = math.exp(x)-5*x
mon = math.pow((x**2+1),0.5)
lnn = math.log(3*x)

print("%.10f"%(sinn+son/mon-lnn))
