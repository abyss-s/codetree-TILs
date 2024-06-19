n = input().split(" ")
a, b, c = int(n[0]), int(n[1]), int(n[2])  # 일 시 분

m = (a - 11) * 24 * 60 + (b - 11) * 60 + (c - 11)
if m < 0:
    print(-1)
else:
    print(m)