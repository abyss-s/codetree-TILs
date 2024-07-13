n = int(input())
arr_2d = [[0 for _ in range(n)] for _ in range(n)]
num = 1

# 첫번째 행 첫번째 원소를 1로 초기화
for i in range(n):
    arr_2d[i][0] = 1
arr_2d[1][1] = 1

for i in range(1, n):
    for j in range(1, n):
        arr_2d[i][j] = arr_2d[i - 1][j] + arr_2d[i - 1][j - 1]

for row in arr_2d:
    for elem in row:
        if elem != 0:
            print(elem, end=" ")
    print()