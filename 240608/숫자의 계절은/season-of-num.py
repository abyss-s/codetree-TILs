n = int(input())

if (3 <= n <= 5):
    print("Spring")
elif (6 <= n <= 8):
    print("Summer")
elif (9 <= n <= 11):
    print("Fall")
elif (1 <= n <= 2 or n == 12):
    print("Winter")