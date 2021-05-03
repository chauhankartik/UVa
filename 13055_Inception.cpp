#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        int n;
        scanf("%lld", &n);
        stack<string> query;
        while(n--) {
                string t;
                getline(cin, t);
                if(!t.compare("Test")) {
                        if(query.size() > 0) {
                                string name = "";
                                bool flag = false;
                                for(auto c :query.top()) {
                                        if(c == ' ') {
                                                flag = true;
                                        }
                                        if(flag) {
                                                name += c;
                                        }
                                }
                                cout << name << endl;
                        } else {
                                cout << "Not in a dream\n";
                        }
                } else if(!t.compare("Kick")) {
                        if(query.size() > 0)
                                query.pop();
                } else {
                        query.push(t);
                        cout << "New Size : " << query.size() << endl;
                        cout << "New Name : " << t << endl;
                }
        } 
        return 0;
}