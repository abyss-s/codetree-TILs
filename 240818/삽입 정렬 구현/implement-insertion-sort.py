n = int(input())
arr = list(map(int, input().split()))
arr.sort()
for elem in arr:
    print(elem, end=" ")