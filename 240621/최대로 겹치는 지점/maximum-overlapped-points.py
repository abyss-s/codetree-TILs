n = int(input())
arr = [0] * n * 2
for _ in range(n):
    a, b = map(int, input().split())
    for i in range(a - 1, b):
        arr[i] += 1
print(max(arr))