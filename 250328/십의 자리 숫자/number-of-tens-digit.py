arr = list(map(int, input().split()))
cnt = [0]*100
for elem in arr:
    if elem == 0: break
    cnt[(elem%100)//10]+=1
for i in range(1, 10):
    print(f"{i} - {cnt[i]}")