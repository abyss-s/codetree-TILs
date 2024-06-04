a, b, c = 5, 6, 7
temp = a
a = c
c = temp

temp = b
b = c
c = temp

print(a)
print(b)
print(c)