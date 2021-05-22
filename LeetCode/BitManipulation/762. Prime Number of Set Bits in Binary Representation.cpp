#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

        set<int> sieve(int n) {
                bool primes[n+1];
                memset(primes, true, sizeof primes);

                for(int p = 2; p * p <= n; p++)
                {
                        if(primes[p] == true) {
                                for(int i = p * p; i <= n; i+= p) {
                                        primes[i] = false;
                                }
                        }
                }
                set<int> res;
                for(int i = 2; i <= n; i++) {
                        if(primes[i]) res.insert(i);
                }
                return res;
        }

        int countPrimeSetBits(int left, int right) {
                set<int> primes;
                primes = sieve(right+5);

                int res = 0;
                for(int i = left; i <= right; i++) {
                        int num = i;
                        int ctr = 0;
                        for(int j = 0; j < 32; j++) {
                                if(num & (1 << j)) ctr += 1;
                        }
                        if(primes.find(ctr) != primes.end()) res += 1;
                }
                return res;
                
        }
};

int main() {}