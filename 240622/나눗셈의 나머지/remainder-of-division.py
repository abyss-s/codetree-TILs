a, b = map(int, input().split())
cnt_arr = [0] * b
while True:
    r = a % b
    cnt_arr[r] += 1
    a //= b
    if a == 0:
        break

cnt_arr2 = [i**2 for i in cnt_arr]
sum = 0
for elem in cnt_arr2:
    sum += elem
print(sum)