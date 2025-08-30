n = int(input())
segments = [tuple(map(int, input().split())) for _ in range(n)]

# Please write your code here.
arr = [0] * 202

for a, b in segments:
    if a > b:
        a, b = b, a
    a = max(a, -100)
    b = min(b, 100)
    for i in range(a, b + 1):
        arr[i + 100] += 1

print(max(arr))
