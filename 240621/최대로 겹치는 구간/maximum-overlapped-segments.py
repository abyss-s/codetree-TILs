n = int(input())
arr = [0] * 201
offset = 100
for _ in range(n):
    a, b = map(int, input().split())
    a += offset
    b += offset
    for i in range(a + 1, b - 1):
        arr[i] += 1
print(arr.count(max(arr)))