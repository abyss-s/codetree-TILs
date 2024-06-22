a1, a2 = map(int, input().split())
arr = [0] * 10
arr[0] = a1
arr[1] = a2
for i in range(2, 10):
    arr[i] = arr[i - 1] + arr[i - 2] * 2
for elem in arr:
    print(elem, end=" ")