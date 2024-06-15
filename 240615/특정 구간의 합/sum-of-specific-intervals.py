nm = input().split()
n, m = int(nm[0]), int(nm[1])
arr = list(map(int, input().split(" ")))
sum_arr = []
for _ in range(m):
    a, b = map(int, input().split(" "))
    sum_arr.append(sum(arr[a - 1 : b]))
for s in sum_arr:
    print(s)