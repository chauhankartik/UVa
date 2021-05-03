#include<bits/stdc++.h>
using namespace std;

int32_t main() {
        string str;
        while (getline(cin, str))
        {
                list<char> q;
                list<char>::iterator it = q.begin();
                for(auto i = 0; i < str.length(); i++) {
                        if(str[i] == '[')
                                it = q.begin();
                        else if(str[i] == ']')
                                it = q.end();
                        else 
                                q.insert(it, str[i]);
                }
                for(auto c : q) cout << c;
                cout << endl;
        }
        return 0;
}

