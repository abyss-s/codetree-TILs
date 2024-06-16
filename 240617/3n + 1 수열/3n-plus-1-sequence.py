cnt = 0
n = int(input())
while True:
    if n == 1:
        break
    else:
        if n % 2 == 0:
            n //= 2
            cnt += 1
        else:
            n = n * 3 + 1
            cnt += 1
print(cnt)