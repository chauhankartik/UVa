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
                int n, m, k; 
                sc(n), sc(m), sc(k);
                int cost = 0;
                int i = 1, j = 1;
                while(j < m) {
                        cost += i;
                        j++;
                }
                while(i < n) {
                        cost += j;
                        i++;
                }
                if(cost == k)
                        cout << "YES" << endl;
                else 
                        cout << "NO" << endl;
        }
	return 0;
}