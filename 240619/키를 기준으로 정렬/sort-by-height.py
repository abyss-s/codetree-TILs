class Data:
    def __init__(self, name, height, weight):
        self.name = name
        self.height = height
        self.weight = weight


n = int(input())
arr = []
for i in range(n):
    input_str = input().split(" ")
    arr.append(Data(input_str[0], input_str[1], input_str[2]))
arr.sort(key=lambda x: x.height)
for i in range(n):
    data = arr[i]
    print(f"{data.name} {data.height} {data.weight}")