n = int(input())

# 10^18 < 2^60임을 이용하여 60개의 후보를 리스트로 정리하기.
lst = []
for x in range(61):
    for y in range(x, 61):
        val = (1 << x) + (1 << y)
        lst.append((val, x, y))

lst.sort()

# |N-후보|가 최소가 되는 후보와 (x, y) 순서쌍 찾기.
min_diff = float("inf")
a_x, a_y = 0, 0
for val, x, y in lst:
    diff = abs(n - val)

    if diff < min_diff:
        min_diff = diff
        a_x, a_y = x, y

print(a_x, a_y)