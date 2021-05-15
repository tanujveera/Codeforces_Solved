year=int(input())
while(year>0):
	year+=1
	y=str(year)
	if((y[0]!=y[1]) and (y[0]!=y[2]) and (y[0]!=y[3]) and (y[3]!=y[2]) and (y[3]!=y[1]) and (y[2]!=y[1])):
		break
print(y)