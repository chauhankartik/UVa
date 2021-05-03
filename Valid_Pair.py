a, b, c = [int(x) for x in input().split()]

if a == b or b == c or a == c:
    print("YES\n")
else:
    print("NO\n")
