str = input().split(" ")
a = float(str[0])
b = float(str[1])
c = float(str[2])

if a <= b and a <= c:
    print(1, end=" ")
else:
    print(0, end=" ")
if a == b == c:
    print(1)
else:
    print(0)