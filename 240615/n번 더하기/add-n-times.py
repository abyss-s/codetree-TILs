input_str = input().split(" ")
a, n = int(input_str[0]), int(input_str[1])

result = a + n

for i in range(a + 1):
    print(result)
    result += n