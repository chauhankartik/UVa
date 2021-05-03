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
                int n; cin >> n;
                int t = 0,f = 0,s = 0;
                if(n % 3 == 0) {
                        cout << (n / 3) << " " << 0 << " " << 0 << endl;
                } else if(n % 5 == 0) {
                        cout << 0 << " " << (n / 5)  << " " << 0 << endl;
                } else if(n % 7 == 0) {
                        cout << 0 << " " << 0 << " " << (n / 7) << endl;
                } else {
                        int rem1 = n - 5;
                        int rem2 = n - 7;
                        if(rem1 % 3 == 0) {
                                t = rem1 / 3;
                                f = 1;
                                s = 0;
                        } else if(rem2 % 3 == 0) {
                                t = rem2 / 3;
                                f = 0;
                                s = 1;
                        }
                        if(t > 0) {
                                cout << t << " " << f << " " << s << endl;
                        } else {
                                cout << -1 << endl;
                        }
                }
        }
	return 0;
}