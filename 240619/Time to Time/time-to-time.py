n = input().split(" ")
a, b, c, d = int(n[0]), int(n[1]), int(n[2]), int(n[3])
m = c * 60 + d - a * 60 - b
print(m)