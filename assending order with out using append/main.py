a=[10,20,50,40,43]
k=len(a)
b=[]
for i in range(k):
    v=min(a)
    b.append(v)
    a.remove(v)
print(b)    