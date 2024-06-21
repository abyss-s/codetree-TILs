n = int(input())
arr = [0]
for _ in range(n):
    arr.append(int(input()))
cnt = 1
arr_cnt = [1]
for i in range(n):
    if i == 0 or arr[i] == arr[i - 1]:
        cnt += 1
    elif arr[i] != arr[i - 1]:
        arr_cnt.append(cnt)
        cnt += 1
print(max(arr_cnt))