#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
        string s; cin >> s;
        int p, q;
        map<int, int> mp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
        while(s.compare("#")) {
                cin >> p >> q;
                mp[p] = q;
                pq.push({q, p});
                cin >> s;
        }

        int k; cin >> k;
        while(k--) {
                cout << pq.top().second << endl;
                q = pq.top().first;
                p = pq.top().second;
                pq.pop();

                q += mp[p];
                pq.push({q,p});
        }
}
