#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &a, 
         const pair<int, int> &b)
{
    if( a.second == b.second ) return a.first < b.first;
    return a.second < b.second;
}

int doLIS(const vector<pair<int, int>> &S,
                 vector<int>           &LIS)
{
        vector<int> L(S.size());
        size_t lisCount = 0;

        for(size_t i = 0; i < S.size(); i++) {

                size_t pos = lower_bound(L.begin(), L.begin()+lisCount, S[i].first) - L.begin();
                L[pos] = S[i].first;
                if(pos == lisCount)
                        ++lisCount;
                LIS[i] = pos + 1;
        }

        return *max_element(LIS.begin(), LIS.end());
}

int main() {

        int t; cin >> t;
        while(t--) {
                int n; cin >> n;
                vector<pair<int, int>> dolls(n);
                
                for(size_t i = 0; i < n; i++)
                        cin >> dolls[i].first >> dolls[i].second;
                
                vector<int> LIS(dolls.size() + 5);
                sort(dolls.begin(), dolls.end(), cmp);
                cout << n + 1 - doLIS(dolls, LIS) << endl;
        }
        return 0;
}