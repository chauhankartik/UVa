#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        string s;
        int cnt = 0;
        while((cin >> s) && s.compare("end"))
        {
                set<char> ships;
                int res = 0;
                vector<stack<char>> dock;
                for(int i = 0; i < s.length(); i++) {
                        if(ships.find(s[i]) == ships.end()) {
                                ships.insert(s[i]);
                        }
                        if(dock.size() == 0) {
                                stack<char> temp;
                                temp.push(s[i]);
                                dock.push_back(temp);
                                // cout << "First : " << dock[0].top() << endl;
                        } else {
                                bool check = false;
                                for(int j =  0; j < dock.size(); j++) {
                                        if(dock[j].top() >= s[i]) {
                                                //cout << dock[j].top() << " >= " << s[i] << endl;
                                                dock[j].push(s[i]);
                                                // cout << "New : " << c.top() << endl;
                                                check = true;
                                                break;
                                        }
                                }
                                if(!check) {
                                        stack<char> temp;
                                        temp.push(s[i]);
                                        dock.push_back(temp);
                                }
                        }
                }

                cout << "Case " << ++cnt << ": " << dock.size() << endl;
        }
        return 0;
}