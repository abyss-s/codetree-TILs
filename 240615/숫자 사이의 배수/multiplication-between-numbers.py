n = input().split(" ")
a, b = int(n[0]), int(n[1])

sum = 0
cnt = 0

i = a
for i in range(a, b + 1):
    if i % 5 == 0 or i % 7 == 0:
        cnt += 1
        sum += i
print(sum, end=" ")
ave = sum / cnt
print(round(ave, 1))