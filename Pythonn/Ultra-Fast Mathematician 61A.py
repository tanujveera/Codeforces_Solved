n=input()
m=input()
n=str(n)
m=str(m)
le=len(m)
st=''
for i in range(0,le):
	if(n[i]!=m[i]):
		st=st+'1'
	else:
		st=st+'0'
print(st)