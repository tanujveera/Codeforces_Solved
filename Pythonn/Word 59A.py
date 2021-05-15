s=input()
l,u=0,0
for i in range(len(s)):
	if(s[i]>='a' and s[i]<='z'):
		l+=1
	if(s[i]>='A' and s[i]<='Z'):
		u+=1
if(u>l):
	a=s.upper()
else:
	a=s.lower()
print(a)
