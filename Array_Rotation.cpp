#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
        int k;
        while(scanf("%lld", &k) == 1) {
                vector<vector<int>> m(k, vector<int>(k));

                for(int i = 0; i < k; i++) {
                        for(int j = 0; j < k; j++) {
                                cin >> m[i][j];
                        }
                }

                for(int i = 0; i < k; i++) {
                        sort(m[i].begin(), m[i].end());
                }

                set<pair<int, vector<int>>> pq;
                int sum = 0;
                vector<int> t;
                for(int i = 0; i < k; i++) {
                        t.push_back(0);
                        sum += m[i][0];
                }
                pq.insert({sum, t});

                while (k--)
                {
                        pair<int, vector<int>> top = *pq.begin();
                        pq.erase(top);
                        t = top.second;
                        sum = top.first;
                        cout << sum << " "; 

                        for(int i = 0; i < t.size(); i++) {

                                int idx = t[i];
                                if(idx+1 < m[i].size()) {
                                        int newSum = sum;
                                        newSum += (m[i][idx+1] - m[i][idx]);
                                        t[i] += 1;
                                        pq.insert({newSum, t});
                                        t[i] -= 1;
                                }
                        }
                }
                cout << endl;
        }
        return 0;
}       
