n=int(input())
lis=[]
for i in range(n):
    k=int(input())
    lis.append(k)
print(lis)
v=sorted(lis)
print(v)
k=v[::-1]
print(k)
m=min(lis)
n=max(lis)
print(m*n)
j=lis[3]
print(m+j)