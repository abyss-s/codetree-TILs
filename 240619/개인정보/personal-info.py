class Student:
    def __init__(self, name, height, weight):
        self.name = name
        self.height = int(height)
        self.weight = float(weight)


students = []
for _ in range(5):
    nn = input().split(" ")
    students.append(Student(nn[0], nn[1], nn[2]))

students.sort(key=lambda x: x.name)
print("name")
for student in students:
    print(student.name, student.height, student.weight)

students.sort(key=lambda x: -x.height)
print("\nheight")
for student in students:
    print(student.name, student.height, student.weight)