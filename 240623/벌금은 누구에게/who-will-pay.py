n, m, k = map(int, input().split())
punishment_cnts = [0] * n

for _ in range(m):
    std_num = int(input())
    punishment_cnts[std_num - 1] += 1
    if punishment_cnts[std_num - 1] >= k:
        print(std_num)
        break
else:
    print(-1)