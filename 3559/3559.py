def pattern(n):
    if n == 1:
        return ["*"]

    prev = pattern(n - 1)
    return prev + ["*" * n] + prev

n = int(input())
result = pattern(n)
print("\n".join(result))

total = 2 ** (n + 1) - n - 2
print(total)