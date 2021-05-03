a = [int(x) for x in input().split(",")]

res = []
for i in range(len(a)):
    ele = a[i]
    counter = 0
    max_count = -1
    num = -1
    for j in range(i+1, len(a)):
        if(a[j] > ele):
            counter += 1
            curr_count = a[j:].count(a[j])
            if curr_count > max_count:
                max_count = curr_count
                num = a[j]
            elif curr_count == max_count:
                if a[j] < num:
                    num = a[j]
    res.append(num)

for i in range(len(a)-1):
    print(res[i], end=",")
print(res[len(a)-1])




