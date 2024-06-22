n = int(input())
input_arr = list(map(int, input().split()))
count_arr = [0] * 9

for i in range(n):
    for j in range(9):
        if input_arr[i] == j + 1:
            count_arr[j] += 1

for cnt in count_arr:
    print(cnt)