num_arr = list(map(int, input().split()))
inx = 1
for elem in num_arr:
    if elem == 0:
        idx = num_arr.index(elem)
sum_value = num_arr[idx - 1] + num_arr[idx - 2] + num_arr[idx - 3]
print(sum_value)