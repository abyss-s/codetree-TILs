class Agent:
    def __init__(self, name, grade):
        self.name = name
        self.grade = grade


arr = []

for i in range(5):
    n = input().split(" ")
    arr.append(Agent(n[0], int(n[1])))

sorted_arr = sorted(arr, key=lambda x: x.grade)
min = sorted_arr[0]
print(f"{min.name} {min.grade}")