#include<bits/stdc++.h>
using namespace std;

int main() {

        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> cache(n);
        vector<int> LIS(n, 1);
        int lisCount = 0;
        
        for(int i = 0; i < n; i++) {

                int pos = lower_bound(cache.begin(), cache.begin() + lisCount, a[i]) - cache.begin();
                cache[pos] = a[i];
                if(pos == lisCount)
                        ++lisCount;
                LIS[i] = pos + 1;
        }
        
        cout << *max_element(LIS.begin(), LIS.end()) << endl;
        return 0;
}