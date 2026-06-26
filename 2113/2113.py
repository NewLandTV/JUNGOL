import math

n = int(input())
x = 1

while x % n != 0:
    x = x * 10 + 1

print(int(math.log10(x)) + 1)