/*
	user : bipolar
	date : Apr 21 2021
*/

#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define sc(n) scanf("%lld", &n)

const int INF = 1000 * 1000 * 1000;
const int EPS = 1e-9;
const int PI = acos(-1.0);

int32_t main() {
        
        int test = 1;
        scanf("%lld", &test);
        while(test--)
        {
                int n, k; cin >> n >> k;
                vector<int> a(n);
                for(auto &c : a) cin >> c;
                sort(a.begin(), a.end());
                for(int i = n - 2; i >= 0 && k > 0; i--) {
                        a[n - 1] += a[i];
                        a[i] = 0;
                        k--;
                }
                cout << a[n - 1] << endl;
        }
	return 0;
}