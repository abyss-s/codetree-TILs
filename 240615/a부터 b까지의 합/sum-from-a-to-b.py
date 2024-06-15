sum = 0
str_input = input().split(" ")
a, b = int(str_input[0]), int(str_input[1])
i = a
for i in range(a, b + 1):
    sum += i
print(sum)