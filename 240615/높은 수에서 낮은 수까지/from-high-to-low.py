input_str = input().split(" ")
a, b = int(input_str[0]), int(input_str[1])

if a <= b:
    for i in range(b - a + 1):
        print(b, end=" ")
        b -= 1
else:
    for i in range(a - b + 1):
        print(a, end=" ")
        a -= 1