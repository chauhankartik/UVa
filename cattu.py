s = input()

res = []

for k in range(2,len(s)):
    a = [s[i:j] for i in range(len(s)) for j in range(i+1,len(s)+1) if len(s[i:j]) == k]
    a.sort()
    for z in a:
        flag = False
        for ele in z:
            if(z.count(ele) & 1):
                flag = True
            
        if not flag:
            res.append(z)

if len(res) == 0:
    res.append(-1)
     
for i in range(len(res)-1):
    print(res[i], end=",")
print(res[len(res)-1])

