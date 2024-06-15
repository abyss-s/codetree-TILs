n = int(input())
arr = []
for i in range(n):
    arr.append(input())
    a = int(arr[i])
    if a % 2 == 1 and a % 3 == 0:
        print(a)