n = int(input())
m = ord("A")
for i in range(1, n + 1):
    for j in range(i - 1):
        print(" ", end=" ")
    for j in range(n - i + 1):
        print(chr(m), end=" ")
        m += 1
        if m > ord("Z"):
            m = ord("A")
    print("")