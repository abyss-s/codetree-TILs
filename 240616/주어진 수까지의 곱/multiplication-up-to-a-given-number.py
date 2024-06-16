n = input().split(" ")
a, b = int(n[0]), int(n[1])
prod = 1
for i in range(a, b + 1):
    prod *= i
print(prod)