sum_val = 0
for i in range(4):
    arr = list(map(int, input().split()))
    for j in range(i + 1):
        sum_val += arr[j]
print(sum_val)