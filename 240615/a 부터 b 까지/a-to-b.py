str_input = input().split(" ")
a, b = int(str_input[0]), int(str_input[1])
for i in range(a, b + 1):
    if a > b:
        break
    else:
        if a % 2 == 1:
            print(a, end=" ")
            a *= 2
        else:
            print(a, end=" ")
            a += 3