def convert_base(n, base):
    s = "0123456789ABCDEF"
    q, r = divmod(n, base)

    if q == 0:
        return s[r]
    return convert_base(q, base) + s[r]

n = int(input())
a = int(input(), n)
b = int(input(), n)

print(a + b)
print(convert_base(a + b, n))