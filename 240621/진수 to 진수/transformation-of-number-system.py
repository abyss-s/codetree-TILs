input_str = input().split(" ")
a, b = int(input_str[0]), int(input_str[1])
n = int(input())

# n을 10진수로 변환
aa = 0
power = 1
while n > 0:
    aa += (n % 10) * power
    n //= 10
    power *= a

# 10진수 값을 b진법으로 변환
b_digits = []
while aa > 0:
    b_digits.append(aa % b)
    aa //= b

# b진법으로 변환한 결과 출력
for i in b_digits[::-1]:
    print(i, end="")