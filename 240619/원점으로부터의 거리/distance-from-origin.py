class Point:
    def __init__(self, x, y, idx):
        self.x = int(x)
        self.y = int(y)
        self.idx = int(idx)


points = []
n = int(input())
for i in range(1, n + 1):
    nn = input().split(" ")
    points.append(Point(nn[0], nn[1], i))

points.sort(key=lambda p: abs(p.x) + abs(p.y))
for point in points:
    print(point.idx)