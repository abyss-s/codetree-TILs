class Student:
    def __init__(self, height, weight, idx):
        self.height = int(height)
        self.weight = int(weight)
        self.idx = int(idx)


students = []
n = int(input())
for i in range(1, n + 1):
    nn = input().split()
    students.append(Student(nn[0], nn[1], i))

students.sort(key=lambda x: (-x.height, -x.weight))

for student in students:
    print(student.height, student.weight, student.idx)