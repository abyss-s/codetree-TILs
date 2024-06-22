for _ in range(5):
    arr = list(input().split())
    upper_arr = [elem.upper() for elem in arr]
    for el in upper_arr:
        print(el, end=" ")
    print("")