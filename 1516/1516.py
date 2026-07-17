while True:
    s = list(input().split())
    d = {}

    if s[0] == "END":
        break

    for i in s:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1

    d = sorted(d.items())
    d = dict(d)

    for k, v in d.items():
        print(f"{k} : {v}")