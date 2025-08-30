n = int(input())
x = []
dir = []
for _ in range(n):
    xi, di = input().split()
    x.append(int(xi))
    dir.append(di)

# Please write your code here.
pos = 0
events = {}

for i in range(n):
    tmp = pos + (x[i] if dir[i] == 'R' else -x[i])
    l, r = (pos, tmp) if pos <= tmp else (tmp, pos)
    if l != r:
        events[l] = events.get(l, 0) + 1
        events[r] = events.get(r, 0) - 1
    pos = tmp

ans, cur = 0, 0
prev = None

for p in sorted(events):
    if prev is not None and cur >= 2:
        ans += p - prev
    cur += events[p]
    prev = p

print(ans)
