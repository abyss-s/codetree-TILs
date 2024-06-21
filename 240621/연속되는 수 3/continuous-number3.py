n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

cnt = 1
arr_cnt = []

for i in range(1, n):
    if arr[i] > 0 and arr[i - 1] > 0 or arr[i] < 0 and arr[i - 1] < 0:
        cnt += 1
    else:
        arr_cnt.append(cnt)
        cnt = 1

arr_cnt.append(cnt)
print(max(arr_cnt))