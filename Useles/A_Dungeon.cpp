#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

    ios_base::sync_with_stdio(false), cin.tie(0);
    //cin.failbit(0);
    int t; cin >> t;
    while(t--) {
        int a, b, c; cin >> a >> b >> c;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        temp.push_back(c);
        sort(temp.begin(), temp.end());
        a = temp[0];
        b = temp[1];
        c = temp[2];
        temp.clear();

        if(a == b && b == c) {
            cout << "Yes" << endl;
        } else {
            int itr = a + b + c;
            for(int i = 1; i <= itr; i++) {
                if(i%7 == 0) {
                    a -= 1;
                    b -= 1;
                    c -= 1;
                    if(a == b && b == c) {
                        cout << "YES" << endl;
                        break;
                    } else if(a == 0 || b == 0 || c == 0) {
                        cout << "NO" << endl;
                        break;
                    }
                } else {
                    if(a != c) {
                        c -= 1;
                        if(c == 0) {
                            cout << "NO" << endl;
                            break;
                        }
                    } else if(a != b) {
                        b -= 1;
                        if(b == 0) {
                            cout << "NO" << endl;
                            break;
                        }
                    }

                    if(a == b && b == c) {
                        cout << "YES" << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}