n, t = map(int, input().split())
arr = list(map(int, input().split()))

cnt = 0
max_cnt = 0

for i in range(1, n):
    if t < arr[i - 1] < arr[i]:
        cnt += 1
    else:
        max_cnt = max(max_cnt, cnt)
        cnt = 1

max_cnt = max(max_cnt, cnt)
print(max_cnt)