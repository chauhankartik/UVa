t = int(input())
while t > 0:
    k1, k2, k3, v = [float(x) for x in input().split()]
    speed = k1*k2*k3*v
    speed = round(100/speed, 2)
    #print(speed)
    if speed < 9.58:
        print('YES')
    else:
        print('NO')
    t -= 1