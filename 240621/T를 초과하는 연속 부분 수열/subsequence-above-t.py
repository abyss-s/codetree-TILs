import sys

n, t = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))

cnt = 0
max_cnt = 0

for i in range(n - 1):
    if arr[i] > t:
        cnt += 1
    else:
        max_cnt = max(max_cnt, cnt)
        cnt = 0

max_cnt = max(max_cnt, cnt)
print(max_cnt if max_cnt > 0 else 0)