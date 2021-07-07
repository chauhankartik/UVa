import math

n = int(input())
m = int(input())

"""
    int C(int n, int r) {
    if(r > n - r) r = n - r;
    int ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
"""

def comb(n,r):
    if r > n - r:
        r = n - r    
    ans = 1
    for i in range(1, r + 1):
        ans *= n - r + i
        ans /= i
    return ans

hell = 1000000007

fac = [1]
last = 1

for i in range(1, max(n, m) + 1):
    fac.append(last * i)
    last = fac[-1]

res = comb(m+n-1, n-1)
res *= fac[n-1] / fac[m]
print(int(res % hell))