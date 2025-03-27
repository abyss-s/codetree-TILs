arr = list(map(int, input().split(" ")))
cnt = [0]*7
for e in arr:
    cnt[e]+=1
for i in range(1, 7):
    c = cnt[i]
    print(f"{i} - {c}")