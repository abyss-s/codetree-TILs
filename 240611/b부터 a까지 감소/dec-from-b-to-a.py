str= input().split(" ")
a, b = int(str[0]), int(str[1])

for i in range(b, a-1, -1):
    print(i, end=" ")