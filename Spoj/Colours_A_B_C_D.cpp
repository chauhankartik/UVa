#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

    int n; cin >> n;
    string s; cin >> s;
    assert(s.length() == 2 * n);
    string res;
    int used[4];

    for(int i = 0; i < 2*n; i += 2) {
        memset(used , 0, sizeof used);
        used[s[i] - 'A'] = 1;
        used[s[i+1] - 'A'] = 1;
        for(int j = 0; j < 4; ++j) {
            if(used[j] == 0) {
                used[j] = 1;
                if(j+1 == 1) res += 'A';
                if(j+1 == 2) res += 'B';
                if(j+1 == 3) res += 'C';
                if(j+1 == 4) res += 'D';
            }
        }

        if(i > 0) {
            if(res[i] == res[i - 1]) {
                char temp = res[i];
                res[i] = res[i+1];
                res[i+1] = temp;
            }
        }
    }

    cout << res << endl;
    return 0;
}