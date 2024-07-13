n = int(input())
arr_2d = [[0 for _ in range(n)] for _ in range(n)]  # n(행) * n(열)의 2차원 배열 생성

num = n * n

# n이 짝수라면 
if n % 2 == 0:
    for j in range(n):
        if j % 2 != 0:
            for i in range(n):
                arr_2d[i][j] = num
                num -= 1
        else:
            for i in range(n - 1, -1, -1):
                arr_2d[i][j] = num
                num -= 1
# n이 홀수일때
else:
    for j in range(n):
        if j % 2 == 0:
            for i in range(n):
                arr_2d[i][j] = num
                num -= 1
        else:
            for i in range(n - 1, -1, -1):
                arr_2d[i][j] = num
                num -= 1

for row in arr_2d:
    for elem in row:
        print(elem, end=" ")
    print()