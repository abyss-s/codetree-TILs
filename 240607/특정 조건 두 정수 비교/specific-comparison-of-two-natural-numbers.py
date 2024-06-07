str = input().split(" ")
a = int(str[0])
b = int(str[1])

if a < b:
    print(1, end=" ")
else:
    print(0, end=" ")

if a == b:
    print(1)
else:
    print(0)