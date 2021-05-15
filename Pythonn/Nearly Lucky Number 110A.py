N=int(input())
n=str(N)
lucky=0
for i in range(len(n)):
	if(n[i]=='4' or n[i]=='7'):
		lucky+=1
if(lucky==7 or lucky==4):
	print("YES")
else:
	print("NO")