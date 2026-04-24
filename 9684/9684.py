n = int(input())
p = [1] * 50
for i in range(2, n):
    p[i] = p[i - 2] + p[i - 1]
print(p[n - 1])