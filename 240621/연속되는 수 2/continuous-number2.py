n = int(input())
arr = []
for _ in range(n):
    a = int(input())
    arr.append(a)
cnt = 0
for i in range(n - 1):
    if i == 0 or arr[i] == arr[i + 1]:
        cnt += 1
print(cnt)