a = list(map(str, input()))
a.sort()

b = list(map(str, input()))
b.sort()

isSameString = False

if len(a) != len(b):
    isSameString = False
else:
    for i in range(len(a)):
        if a[i] == b[i]:
            isSameString = True
        else:
            isSameString = False

if isSameString == True:
    print("Yes")
else:
    print("No")