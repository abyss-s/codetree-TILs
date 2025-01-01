n, m = map(int, input().split())

# 선두 변경 횟수
res = 0
# 이동 기록 저장
a_moves, b_moves = [], []
# 이동 거리
a_dist, b_dist = 0, 0

for i in range(n):
    v, t = map(int, input().split())
    a_moves.extend([v] * t)

for i in range(m):
    v, t = map(int, input().split())
    b_moves.extend([v] * t)

prev = 0

for i in range(n):
    a_dist += a_moves[i]
    b_dist += b_moves[i]

    if a_dist > b_dist:
        cur = -1
    elif a_dist < b_dist:
        cur = 1
    else:
        cur = 0

    if cur != prev and cur != 0:
        res += 1

    prev = cur

print(res)
