n = int(input())
cnt = 0
for i in range(1, 101):
    if n <= 1:
        print(cnt)
        break
    n //= i
    cnt += 1