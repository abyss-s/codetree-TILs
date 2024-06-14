str= input().split(" ")
a, b = int(str[0]), int(str[1])

# 정수 부분
result_1 = a // b

# 소수 부분
result_2 = a % b

# 소숫점 앞자리
result = repr(result_1)+ "."

for i in range(20):
    result_2 *= 10
    n = result_2 // b
    result += repr(n)
    result_2 = result_2 % b

print(result)