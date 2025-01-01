n, m = map(int, input().split())

# 선두 변경 횟수
res = -1
a_moves = []
b_moves = []

for _ in range(n):
    v, t = map(int, input().split())
    a_moves.extend([v] * t)

for _ in range(m):
    v, t = map(int, input().split())
    b_moves.extend([v] * t)

a_dist, b_dist = 0, 0
previous_lead = 0

for i in range(len(a_moves)):
    a_dist += a_moves[i]
    b_dist += b_moves[i]

    # 현재 선두 계산
    if a_dist > b_dist:
        current_lead = -1  # A가 선두
    elif a_dist < b_dist:
        current_lead = 1  # B가 선두
    else:
        current_lead = 0  # 동점

    if current_lead != previous_lead and current_lead != 0:
        res += 1

    # 이전 선두 갱신
    previous_lead = current_lead

print(res)
