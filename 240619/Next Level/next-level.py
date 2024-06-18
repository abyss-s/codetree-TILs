class NextLevel:
    def __init__(self, id, level):
        self.id = id
        self.level = level
        print(f"user {id} lv {level}")


n = input().split(" ")
n1 = NextLevel("codetree", 10)
n2 = NextLevel(n[0], n[1])