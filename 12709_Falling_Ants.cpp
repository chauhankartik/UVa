/*
	user : bipolar
	date : Apr 22 2021
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define sc(n) scanf("%lld", &n)
#define G 10.0

int32_t main() {
        
        int test = 1;
        while(test--)
        {
                int n;
                while(scanf("%lld", &n) != EOF && n!=0) {
                        double l, w, h;
                        double down = -1;
                        int vol = -1;
                        while(n--) {
                                scanf("%lf %lf %lf", &l, &w, &h);
                                double acc = G - (G/(2*h));
                                if(acc > down) {
                                        down = acc;
                                        vol = (int)(l*w*h);
                                } else if(acc == down) {
                                        vol = max((int)vol, (int)(l*w*h));
                                }
                        }
                        printf("%lld\n", vol);
                }
        }
	return 0;
}