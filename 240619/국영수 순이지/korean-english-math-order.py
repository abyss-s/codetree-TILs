class Student:
    def __init__(self, name, kor, eng, math):
        self.name = name
        self.kor = int(kor)
        self.eng = int(eng)
        self.math = int(math)


students = []
n = int(input())
for _ in range(n):
    nn = input().split(" ")
    students.append(Student(nn[0], nn[1], nn[2], nn[3]))

students.sort(key=lambda x: (-x.kor, -x.eng, -x.math))

for student in students:
    print(student.name, student.kor, student.eng, student.math)