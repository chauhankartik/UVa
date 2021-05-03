/*
	user : bipolar
	date : Apr 20 2021
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
                vector<int> v;
                int x;
                while(scanf("%lld", &x) != EOF) {
                        v.push_back(x);
                        sort(v.begin(), v.end());
                        if(v.size() & 1) {
                                int key = v.size() / 2;
                                printf("%lld\n", v[key]);
                        } else {
                                int key_1 = (v.size() - 1) / 2;
                                int key_2 = (v.size() + 1) / 2;
                                printf("%lld\n", (v[key_1] + v[key_2]) / 2); 
                        }
                }
        }
	return 0;
}