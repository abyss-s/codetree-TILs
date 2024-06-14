input_str = input().split(" ")
c, n = str(input_str[0]), int(input_str[1])

if c == "A":
    for i in range(n):
        i += 1
        print(i, end=" ")
elif c == "D":
    for i in range(n):
        i += 1
        print(n - i + 1, end=" ")