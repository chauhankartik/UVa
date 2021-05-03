#include<bits/stdc++.h>
using namespace std;

int main() {

        int n; 
        while(cin >> n && n!= 0) {
                vector<pair<int, int>> a(n);
                for(auto &c : a) cin >> c.first >> c.second;
                sort(a.begin(), a.end());

                vector<int> dp(n, 1);

                for(int i = 1; i < n; i++) {
                        for(int j = 0; j < i; j++) {
                                if(a[i].first >= a[j].first && a[i].second >= a[j].second)
                                        dp[i] = max(dp[i], 1 + dp[j]);
                        }
                }
                cout << *max_element(dp.begin(), dp.end()) << endl;
        }
        cout << "*" << endl;
        return 0;
}