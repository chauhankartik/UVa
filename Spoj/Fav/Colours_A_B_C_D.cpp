#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        int n; cin >> n;
        string s; cin >> s;

        //char a[] = {'A', 'B', 'C', 'D'};
        int used[4];
        memset(used, n, sizeof(used));

        bool ch_used[4];

        char res[2*n];

        map<int, char> mp;
        mp[0] = 'A', mp[1] = 'B', mp[2] = 'C', mp[3] = 'D';

        for(int i = 0; i < 2 * n - 1; i += 2) {
                memset(ch_used, false, sizeof(used));
                used[s[i] - 'A'] -= 1;
                ch_used[s[i]-'A'] = true;
                used[s[i + 1] - 'A'] -= 1;
                ch_used[s[i+1] - 'A'] = true;
                int idx = i;
                for(int j = 0; j < 4; j++) {
                        if(ch_used[j] == false && used[j]) {
                                res[idx] = mp[j];
                                used[j] = true;
                                idx += 1;
                                used[j] -= 1;
                                ch_used[j] = true;
                        }
                }

                if(i >= 2) {
                        if(res[i] == res[i - 1]) {
                                char t = res[i];
                                res[i] = res[i+1];
                                res[i+1] = t;
                        }
                }
        }

        cout << res << endl;
        return 0;
}