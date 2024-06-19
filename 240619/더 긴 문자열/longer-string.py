n = input().split(" ")
a, b = n[0], n[1]
if len(a) > len(b):
    print(f"{a} {len(a)}")
elif len(a) < len(b):
    print(f"{b} {len(b)}")
else:
    print("same")