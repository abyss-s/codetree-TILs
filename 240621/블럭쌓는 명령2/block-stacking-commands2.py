input_str = input().split(" ")
n, k = int(input_str[0]), int(input_str[1])
arr = [0] * n
for _ in range(k):
    input_str2 = input().split(" ")
    a, b = int(input_str2[0]), int(input_str2[1])
    for i in range(a - 1, b):
        arr[i] += 1
arr.sort()
print(arr)
print(arr[n - 1])