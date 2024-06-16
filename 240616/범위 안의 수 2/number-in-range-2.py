arr = []
for _ in range(10):
    arr.append(int(input()))

sum = 0
cnt = 0
for i in range(10):
    if 0 <= arr[i] <= 200:
        sum += arr[i]
        cnt += 1
print(sum, end=" ")
avg = sum / cnt
print(round(avg, 1))