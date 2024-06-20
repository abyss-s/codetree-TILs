digits = list(map(int, list(input())))
n = 0
for i in range(len(digits)):
    n = n * 2 + digits[i]
n *= 17
new_digits = []
while True:
    if n < 2:
        new_digits.append(n)
        break
    new_digits.append(n % 2)
    n //= 2
for i in new_digits[::-1]:
    print(i, end="")