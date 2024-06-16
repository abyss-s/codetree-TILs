n = input().split(" ")
a, b = int(n[0]), int(n[1])
prod = a
for _ in range(a, b + 1):
    prod *= a
print(prod)