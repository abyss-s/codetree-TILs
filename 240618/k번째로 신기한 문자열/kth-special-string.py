s = input().split(" ")
n, k, T = int(s[0]), int(s[1]), s[2]

str_arr = []
for _ in range(n):
    str_i = input()
    if str_i.startswith((T)):
        str_arr.append(str_i)
str_arr.sort()
print(str_arr[k - 1])