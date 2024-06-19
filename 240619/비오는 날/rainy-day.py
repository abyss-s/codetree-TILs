class Data:
    def __init__(self, date, day, weather):
        self.date = date
        self.day = day
        self.weather = weather


n = int(input())
arr = []
for i in range(n):
    input_str = input().split(" ")
    if input_str[2] == "Rain":
        arr.append(Data(input_str[0], input_str[1], input_str[2]))

sorted_arr = sorted(arr, key=lambda person: person.date)

first_data = sorted_arr[0]
print(f"{first_data.date} {first_data.day} {first_data.weather}")