input_n = input().split(" ")
n, b = int(input_n[0]), int(input_n[1])
digits = []
while True:
    if n < b:
        digits.append(n)
        break
    digits.append(n % b)
    n //= b
for digit in digits[::-1]:
    print(digit, end="")