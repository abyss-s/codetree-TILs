n = input().split(" ")
m1, d1, m2, d2 = int(n[0]), int(n[1]), int(n[2]), int(n[3])
days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
sum = 1

# 같은 달일 경우
if m1 == m2:
    sum += d2 - d1
# 다른 달일 경우
else:
    sum += days[m1 - 1] - d1  # m1의 일수
    for m in range(m1, m2 - 1):  # 사이에 있는 월의 총 일수
        sum += days[m - 1]
    sum += d2  # m2의 일수
print(sum)