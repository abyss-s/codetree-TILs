n = int(input())
for i in range(n):
    a = i + 1
    if a % 2 == 0 or a % 3 == 0:
        print(1, end=" ")
    else:
        print(0, end=" ")
    a += 1