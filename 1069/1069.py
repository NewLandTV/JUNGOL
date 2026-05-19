cnt = [0] * 10
for _ in range(10):
    n = int(input())
    while n >= 10:
        total = 0
        while n > 0:
            n, r = divmod(n, 10)
            total += r
        n = total
    cnt[n] += 1
m = max(cnt)
for i in range(10):
    if cnt[i] == m:
        print(i, end=" ")