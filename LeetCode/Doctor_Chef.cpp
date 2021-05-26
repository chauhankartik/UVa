#include<bits/stdc++.h>
using namespace std;

int main() {
        int t; cin >> t;
        while(t--) {
                int n, x; cin >> n >> x;
                vector<int> v(n);
                for(auto &c : v) cin >> c;

                int days = 0;
                sort(v.begin(), v.end());

                int i = 0;
                while(i < n) {
                        int cured = min(v[i], x);
                        int left = v[i] - cured;
                        v[i] = 2 * left;
                        days += 1;
                        x += cured;
                        if(v[i] == 0)
                                i += 1;
                }

                cout << days << endl;
        }
        return 0;
}