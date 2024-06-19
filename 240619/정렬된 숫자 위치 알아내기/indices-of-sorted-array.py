class Point:
    def __init__(self, x, idx):
        self.x = int(x)
        self.idx = int(idx)


n = int(input())
points = []

# 한 줄로 x값 입력 받기
x_values = tuple(map(int, input().split()))

# 각 point 객체를 points에 추가
for i in range(1, n + 1):
    points.append(Point(x_values[i - 1], i))

# x 값 기준으로 오름차순 정렬
points.sort(key=lambda p: p.x)

sorted_x_values = [0] * n
for idx, point in enumerate(points):
    # 원 배열 인덱스에 새로운 배열 인덱스를 매핑
    sorted_x_values[point.idx - 1] = idx + 1

for point in sorted_x_values:
    print(point, end=" ")