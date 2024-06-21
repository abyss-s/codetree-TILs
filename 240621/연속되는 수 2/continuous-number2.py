n = int(input())
arr = [0]
for _ in range(n):
    arr.append(int(input()))
cnt = 0
max_cnt = 0
for i in range(n):
    if i == 0 or arr[i] == arr[i + 1]:
        cnt += 1
    if cnt > max_cnt:
        max_cnt = cnt
print(max_cnt)