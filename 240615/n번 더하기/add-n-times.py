input_str = input().split(" ")
a, n = int(input_str[0]), int(input_str[1])

for _ in range(n):
    a += n
    print(a)