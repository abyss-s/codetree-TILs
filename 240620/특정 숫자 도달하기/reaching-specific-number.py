sum, cnt = 0, 0
arr = tuple(map(int, input().split()))
for i in range(10):
    if arr[i] >= 250:
        break
    sum += arr[i]
    cnt += 1
print(f"{sum} {sum/cnt:.1f}")