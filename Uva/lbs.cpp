#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a, int n)
{
        vector<int> lis(n,1), lds(n,1);

        for(int i = 1; i < n; i++) {
                for(int j = 0; j < i; j++) {
                        if(a[i] >= a[j]) {
                                lis[i] = max(lis[i], 1+lis[j]);
                        }
                }
        }

        for(int i = n - 2; i >= 0; i--) {
                for(int j = n - 1; j > i; j--) {
                        if(a[i] >= a[j]) {
                                lds[i] = max(lds[i], 1 + lds[j]);
                        }
                }
        }

        for(int i = 0; i < n; i++) {
                lds[i] += lis[i];
        }

        int ans = *max_element(lds.begin(), lds.end());

        return ans - 1;
}


int main() {

        int n; cin >> n;
        vector<int> a(n);
        for(auto &c : a) cin >> c;
        cout << solve(a, n) << endl;
        return 0;
}