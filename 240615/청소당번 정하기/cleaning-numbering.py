n = int(input())
a, b, c = 0, 0, 0  # 순서대로 교실, 복도, 화장실 청소 횟수
for i in range(1, n + 1):
    if i % 2 == 0 and i % 3 == 0 and i % 12 == 0:
        c += 1
    elif i % 2 == 0 and i % 12 == 0:
        c += 1
    elif i % 3 == 0 and i % 12 == 0:
        c += 1
    elif i % 2 == 0 and i % 3 == 0:
        b += 1
    elif i % 2 == 0:
        a += 1
    elif i % 3 == 0:
        b += 1
    elif i % 12 == 0:
        c += 1
print(f"{a} {b} {c}")