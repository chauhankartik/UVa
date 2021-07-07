n = int(input())
w = []
h = []

for i in range(n):
    w.append(int(input()))

for i in range(n):
    h.append(int(input()))

res = []

for i in range(0,len(w)):
    bmi = w[i] / pow(h[i] / 100, 2)
    if bmi >= 18.5 and bmi < 25:
        continue
    else:
        res.append(max(bmi, 1))

res.sort()

for i in res:
    print("{:.4f}".format(i))
