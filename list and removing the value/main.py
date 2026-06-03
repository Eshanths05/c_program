n = int(input())
lis = []
for i in range(n):
    k = int(input())
    lis.append(k)
print(lis)
y = int(input())
a = lis.count(y)
for i in range(a):
    lis.remove(y)

print(lis)
