n = int(input())
str_arr = []
for _ in range(n):
    str_input = input()
    str_arr.append(str_input)

ch = input()
cnt = 0
len_sum = 0

for elem in str_arr:
    if elem[0] == ch:
        cnt += 1
        len_sum += len(elem)
if cnt != 0:
    print(cnt, f"{len_sum/cnt:.2f}")