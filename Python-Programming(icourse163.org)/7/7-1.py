from datetime import *

dates = input()


d1=datetime.strptime(dates[:4]+'/1/1','%Y/%m/%d')
date=datetime.strptime(dates, '%Y/%m/%d')

print((date-d1).days+1)