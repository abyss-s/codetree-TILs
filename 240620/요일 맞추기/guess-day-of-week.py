m1, d1, m2, d2 = tuple(map(int, input().split()))
days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
str_day = ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"]

sum = 1
if m1 == m2:
    sum = d2 - d1 + 1
else:
    sum += days[m1] - d1
    for m in range(m1 + 1, m2):
        sum += days[m]
    sum += d2

print(str_day[sum % 7])