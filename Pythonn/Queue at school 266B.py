n,k=map(int, input().split())
s=list(input())
li=list(s)
for j in range(k):
	flag=0
	for i in range(0,n-1):
		if flag==1:
			flag=0
			continue
		if ord(li[i])<ord(li[i+1]): 
#ord() gives the binary eq of character
			li[i],li[i+1]=li[i+1],li[i]
			flag=1
			continue
print(''.join(li))
