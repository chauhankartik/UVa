#include<bits/stdc++.h>
using namespace std;

int main() {

        int n, m; cin >> n >> m;
        int mod = 1e9 + 7;
        vector<int> vec(n+1, 0);
        for(int i = 1; i <= n; i++) cin >> vec[i];

        vector<int> dp(n+1, 0);

        for(int i = 1; i <= n; i++) {
                if(vec[i] == 0) {
                        int left  = ((i - 1) >= 1) ? vec[i - 1] : 0;
                        int right = ((i + 1) <= n) ? vec[i + 1] : 0;
                }
        }
        return 0;
}