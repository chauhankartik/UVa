#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t; scanf("%lld", &t);
    while(t--) {
        int n; 
        scanf("%lld", &n);
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }    
        vector<int> res;
        vector<int> aux;
        for(auto c : a) {
            if(c & 1)
                res.push_back(c);
            else 
                aux.push_back(c);
        }
        for(auto c : res) {
            cout << c << " ";
        }
        for(auto c : aux) {
            cout << c << " ";
        }
        cout << endl;
    }
}