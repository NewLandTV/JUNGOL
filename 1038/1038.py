l = [input() for _ in range(3)]
a, b = int(l[0]), int(l[2])
op = l[1]

print(a + b if op.count("+") else a * b)