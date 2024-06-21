n = int(input())
arr = [0] * n * 2
for _ in range(n):
    input_str2 = input().split(" ")
    a, b = int(input_str2[0]), int(input_str2[1])
    for i in range(a, b - 1):
        arr[i] += 1
print(max(arr))