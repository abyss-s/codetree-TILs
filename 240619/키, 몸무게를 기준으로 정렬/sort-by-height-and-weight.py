class Student:
    def __init__(self, name, height, weight):
        self.name = name
        self.height = int(height)
        self.weight = int(weight)


students = []
n = int(input())
for _ in range(n):
    nn = input().split(" ")
    students.append(Student(nn[0], nn[1], nn[2]))

students.sort(key=lambda x: (x.height, -x.weight))
for student in students:
    print(student.name, student.height, student.weight)