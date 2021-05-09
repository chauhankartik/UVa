#include<bits/stdc++.h>
using namespace std;
#define int long long int 

int32_t main() {

        int n;
        while ((scanf("%lld", &n) == 1) && n != 0)
        {
                map<int, int> mp;
                for(int i = 1; i <= 1e8; i++) {
                        if(i > n) {
                                break;
                        }
                        if((n % (i*i)) == 0 && (n / (i*i))==1) {
                                mp[i] = 2;
                        }
                        if((n%(i*i*i) == 0) && (n / (i*i*i)) == 1) {
                                mp[i] = 3;
                        }
                        if(mp.size() == 2) {
                                cout << "Special" << endl;
                                break;
                        }
                } 
                if(n != 1 && mp.size() != 2) {
                        cout << "Ordinary" << endl;
                }
                if(n ==1){
                        cout << "Special" << endl;
                }
        }
        
        return 0;
}