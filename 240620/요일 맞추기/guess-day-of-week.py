m1, d1, m2, d2 = tuple(map(int, input().split()))
days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
str_day = ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"]

total_days = 1

if m1 == m2:
    total_days = d2 - d1 + 1
elif m1 < m2:
    total_days += days[m1] - d1
    for m in range(m1 + 1, m2):
        total_days += days[m]
    total_days += d2
else:
    total_days += days[m1] - d1
    for m in range(m2, m1):
        total_days += days[m]
    total_days += d2

print(str_day[total_days % 7])