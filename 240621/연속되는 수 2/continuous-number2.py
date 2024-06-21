n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))
cnt = 0
if n == 0:
    cnt = 0
elif n == 1:
    cnt = 1
for i in range(1, n):
    if arr[i] == arr[i - 1]:
        cnt += 1
print(cnt)