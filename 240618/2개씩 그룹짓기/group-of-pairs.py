n = int(input())
a = list(map(int, input().split(" ")))
a.sort()

max_sum = 0
for i in range(n):
    sum = a[i] + a[2 * n - i - 1]
    if sum > max_sum:
        max_sum = sum


print(max_sum)