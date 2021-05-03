s = input()

for i in range(20):
    T = "0"*i + s
    if T == T[::-1]:
        print("Yes")
        exit()

print("No")