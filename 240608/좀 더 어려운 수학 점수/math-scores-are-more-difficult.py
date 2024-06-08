str1 = input().split(" ")
a1 = int(str1[0])  # A 수학
a2 = int(str1[1])  # A 영어
str2 = input().split(" ")
b1 = int(str2[0])  # B 수학
b2 = int(str2[1])  # B 영어
if (a1 == b1):
    if (a2 > b2):
        print("A")
    else:
        print("B")
else:
    if (a1 > b1):
        print("A")
    else:
        print("B")