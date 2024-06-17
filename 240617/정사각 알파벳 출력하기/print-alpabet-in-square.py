n = int(input())
m = ord("A")
for i in range(n):
    for j in range(n):
        print(chr(m), end="")
        m += 1
    print("")