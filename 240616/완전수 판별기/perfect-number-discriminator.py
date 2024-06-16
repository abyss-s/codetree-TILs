n = int(input())
arr = []  # 약수의 집합
for i in range(1, n):
    if n % i == 0:
        arr.append(i)
sum = 0
for i in range(len(arr)):
    sum += arr[i]
if sum == n:
    print("P")
else:
    print("N")