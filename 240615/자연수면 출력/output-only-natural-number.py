input_str = input().split(" ")
a, b = int(input_str[0]), int(input_str[1])

if a > 0:
    for _ in range(b):
        print(a, end="")
else:
    print(0)