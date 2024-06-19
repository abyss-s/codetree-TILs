class Class:
    def __init__(self, code, color, sec):
        self.code = code
        self.color = color
        self.sec = sec


n = input().split(" ")
cl = Class(n[0], n[1], n[2])
print(f"code : {cl.code}")
print(f"color : {cl.color}")
print(f"second : {cl.sec}")