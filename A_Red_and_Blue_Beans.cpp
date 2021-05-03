/*
	user : bipolar
	date : Apr 29 2021
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
                bool flag = false;
                int r, b, d;
                sc(r), sc(b), sc(d);
                if(abs(r-b) <= d) {
                        cout << "YES" << endl;
                        flag = true;
                } else {
                        int max_packet = min(r, b);
                        int other = ceil(((double)r+b-max_packet)/max_packet);
                        if(abs(other - 1) <= d){
                                cout << "YES" << endl;
                                flag = true;
                        } 
                }
                if(!flag) {
                        cout << "NO" << endl;
                }
        }
	return 0;
}