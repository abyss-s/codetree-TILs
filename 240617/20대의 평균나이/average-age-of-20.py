sum = 0
cnt = 0
while True:
    n = int(input())
    if n > 29 or n < 20:
        break
    else:
        sum += n
        cnt += 1
print(f"{sum/cnt:.2f}")