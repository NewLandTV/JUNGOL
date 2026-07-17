n = int(input())
if n > 28:
    print((n - 1) // 7 + 4)
else:
    for i in range(1, 8):
        if i * (i + 1) >> 1 >= n:
            print(i)
            break