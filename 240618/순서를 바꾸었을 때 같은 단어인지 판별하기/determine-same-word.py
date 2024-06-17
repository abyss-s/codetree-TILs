a = list(input())
a.sort()
b = list(input())
b.sort()

isSameString = True

if len(a) != len(b):
    isSameString = False
else:
    for i in range(len(a)):
        if a[i] != b[i]:
            isSameString = False
            break

if isSameString:
    print("Yes")
else:
    print("No")