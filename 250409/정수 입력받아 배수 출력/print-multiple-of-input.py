n = int(input())
i = n
count = 0
while count < 5:
    if (i >= n and i % n == 0):
        print(i, end=' ')
        count += 1
    i += 1