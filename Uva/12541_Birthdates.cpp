/*
	user : bipolar
	date : Apr 21 2021
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define sc(n) scanf("%lld", &n)

int32_t main() {
        
        int test = 1;
        // scanf("%lld", &test);
        while(test--)
        {
                int old = 0, young = INT64_MAX;
                string a, b;
                int n; scanf("%lld", &n);
                while (n--)
                {
                        string str;
                        int dd, mm, yy;
                        cin >> str >> dd >> mm >> yy;
                        dd = dd + mm*1000 + yy*100000;
                        if(old < dd) {
                                old = dd;
                                a = str;
                        }
                        if(young > dd) {
                                young = dd;
                                b = str;
                        }
                }
                cout << a << endl;
                cout << b << endl;
                
        }
	return 0;
}