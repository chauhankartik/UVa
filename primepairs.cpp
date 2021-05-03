#include<bits/stdc++.h>
using namespace std;

int solve(int l, int r) {
        int res = 0;
        vector<int> primes;
        for(int i = l; i <= r; i++) {
                int current = 1;
                for(int j = 2; j < i; j++) {
                        if(i % j == 0) {
                                current -= 1;
                                break;
                        }
                }
                if(current) {
                        primes.push_back(i);
                }
        }
        sort(primes.begin(), primes.end());
        for(int i = 0; i < primes.size(); i++) {
                for(int j = i + 1; j < primes.size(); j++) {
                        if(primes[j] - primes[i] == 6)
                                res++;
                        else if(primes[j] - primes[i] > 6) {
                                break;
                        }
                }
        }
        return res;
}

int main() {
        int l, r; cin >> l >> r;
        cout << solve(l, r) << endl;
        return 0;
}