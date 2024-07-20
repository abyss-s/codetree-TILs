n, m = map(int, input().split())

moves_A = []
for _ in range(n):
    d, t = input().split()
    t = int(t)
    moves_A.append((d, t))

moves_B = []
for _ in range(m):
    d, t = input().split()
    t = int(t)
    moves_B.append((d, t))

# 초기 위치
position_A = 0
position_B = 0

# 이동 시간
time_A = 0
time_B = 0

# 현재 인덱스
index_A = 0
index_B = 0

# A와 B의 총 이동 시간 계산
total_time_A = sum([t for d, t in moves_A])
total_time_B = sum([t for d, t in moves_B])
total_time = max(total_time_A, total_time_B)

# 이동시간마다 
for t in range(total_time):
    # A 이동
    if index_A < n and time_A < moves_A[index_A][1]:
        if moves_A[index_A][0] == "L":
            position_A -= 1
        else:
            position_A += 1
        time_A += 1
    if index_A < n and time_A == moves_A[index_A][1]:
        index_A += 1
        time_A = 0

    # B 이동
    if index_B < m and time_B < moves_B[index_B][1]:
        if moves_B[index_B][0] == "L":
            position_B -= 1
        else:
            position_B += 1
        time_B += 1
    if index_B < m and time_B == moves_B[index_B][1]:
        index_B += 1
        time_B = 0

    # A와 B가 만나면 
    if position_A == position_B:
        print(t + 1)
        break
else:
    print(-1)