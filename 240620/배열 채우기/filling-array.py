arr = []
input_str = list(map(int, input().split()))
for n in input_str:
    if n == 0:
        break
    else:
        arr.append(n)

for i in range(len(arr) - 1, -1, -1):
    print(arr[i], end=" ")