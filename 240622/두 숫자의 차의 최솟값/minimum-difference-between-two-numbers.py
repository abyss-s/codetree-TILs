n = int(input())
arr = list(map(int, input().split()))
diff_arr = [arr[i] - arr[i - 1] for i in range(2, n)]
print(min(diff_arr))