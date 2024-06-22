n = int(input())
arr = list(map(int, input().split()))
arr2 = [arr[i] ** 2 for i in range(n)]
for elem in arr2:
    print(elem, end=" ")