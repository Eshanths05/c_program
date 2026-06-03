x = [72, 37, 63, 30, 30, 9]
t = set(x)
y = list(t)
yy = sorted(y)
yyy = yy[::-1]
even = []
odd = []
for i in yyy:
    if i % 2 == 0:
        even.append(i)
    else:
        odd.append(i)
print(even)
print(odd)
