n, m = map(int, input().split())  # n = 격자의 크기, m = 동전 개수
arr_2d = [[0 for _ in range(n)] for _ in range(n)]  # n*n의 격자 2차원 배열 생성

num = 1
for _ in range(m):
    r, c = tuple(map(int, input().split()))  # 동전 위치 입력받기
    arr_2d[r - 1][c - 1] = num  # 동전이 있는 위치를 1로 나타내기
    num += 1

for row in arr_2d:
    for elem in row:
        print(elem, end=" ")
    print()