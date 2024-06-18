n = int(input())
nums = list(map(int, input().split()))
arr = []

for i in range(n):
    arr.append(nums[i])
    arr.sort()
    if (i + 1) % 2 == 1:
        m = arr[len(arr) // 2]
        print(m, end=" ")