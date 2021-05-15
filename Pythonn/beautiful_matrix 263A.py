matrix = []
for i in range(5):
	matrix.append([int(i) for i in input().split(' ')])
x=0
y=0
print(*matrix,sep="\n")
for i in range(5):
	if matrix[i].count(1) > 0:
		y=i
		x=matrix[i].index(1)
print(y,x)
print(abs(2-y)+abs(2-x))
