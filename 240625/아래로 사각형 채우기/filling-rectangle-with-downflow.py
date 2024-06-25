n = int(input())
arr_2d = [[0 for _ in range(n)] for _ in range(n)]

for i in range(n):
    num = i + 1
    for j in range(n):
        arr_2d[i][j] = num
        num += n

# 출력
for row in arr_2d:
    for elem in row:
        print(elem, end=" ")
    print()