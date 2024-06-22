a, b = map(int, input().split())
cnt_arr = [0] * b
while a > 1:
    r = a % b
    cnt_arr[r] += 1
    a //= b

cnt_arr2 = sum(i**2 for i in cnt_arr)
print(cnt_arr2)