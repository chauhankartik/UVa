#include<bits/stdc++.h>
using namespace std;

int main() {
        string s; cin >> s;
        string temp = s;
        do {
                cout << s << endl;
        } while(next_permutation(s.begin(), s.end()));
        bool val = prev_permutation(temp.begin(), temp.end());
        if(val) {
                do {
                        cout << temp << endl;
                } while(prev_permutation(temp.begin(),temp.end()));
        }
        return 0;
}