#include<bits/stdc++.h>
using namespace std;
#define int long long int

struct obj {
        int start;
        int end;
        int profit;
};

bool cmp(const obj &a,
         const obj &b)
{
        return (a.end < b.end);
}

int getJ(const vector<obj> &a,
         const vector<int> &endVector,
         const int          i)
{       
        // sorted
        int idx = lower_bound(endVector.begin(), endVector.end(), a[i].start) - endVector.begin();
        if(idx == 0)
                return idx;
        return --idx;
}

int32_t main() {
        int n; cin >> n;
        vector<obj> a(n+1);
        for(int i = 1; i <= n; i++) 
                cin >> a[i].start >> a[i].end >> a[i].profit;

        vector<int> endVector(a.size());
        for(int _i = 0; _i < a.size(); _i++) 
                endVector[_i] = a[_i].end;

        sort(a.begin(), a.end(), cmp);

        int dp[n+1];
        memset(dp, 0, sizeof dp);
        dp[0] = 0;

        for(int i = 1; i <= n; i++) {
                int j = getJ(a, endVector, i);
                dp[i] = max(dp[i-1], a[i].profit + dp[j]);
        }
        cout << dp[n] << endl;
        return 0;
}