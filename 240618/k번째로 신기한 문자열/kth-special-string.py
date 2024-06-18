s = input().split(" ")
n, k, T = int(s[0]), int(s[1]), str(s[2])

str_arr = []
for i in range(n):
    str_i = input()
    if T in str_i:
        str_arr.append(str_i)
str_arr.sort()

print(str_arr[k - 1])