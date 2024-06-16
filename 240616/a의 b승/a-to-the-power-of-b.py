n = input().split(" ")
a, b = int(n[0]), int(n[1])
prod = 1
for _ in range(b):
    prod *= a
print(prod)