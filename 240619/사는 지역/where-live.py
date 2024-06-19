class Person:
    def __init__(self, name, addr, city):
        self.name = name
        self.addr = addr
        self.city = city


n = int(input())
arr = []
for i in range(n):
    input_str = input().split(" ")
    arr.append(Person(input_str[0], input_str[1], input_str[2]))
sorted_arr = sorted(arr, key=lambda person: person.name)
first_person = sorted_arr[n - 1]
print(f"name {first_person.name}")
print(f"addr {first_person.addr}")
print(f"city {first_person.city}")