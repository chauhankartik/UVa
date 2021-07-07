#include<bits/stdc++.h>
using namespace std;

void __solve() {
    int vec[10];
    for(int i = 0; i < 10; i++) {
        cin >> vec[i];
    }

    set<int> ok, notok;
    for(int i = 0; i < 10; i++) {
        if(ok.find(vec[i]) != ok.end()) {
            notok.insert(vec[i]);
            ok.erase(vec[i]);
        } else if(notok.find(vec[i]) == notok.end()) {
            ok.insert(vec[i]);
        }
    }

    // bool check[11];
    // memset(check, true, sizeof check);
    // set<int> s;

    // for(int i = 0; i < 10; i++) {
    //     if(s.find(vec[i]) != s.end()) {
    //         check[vec[i]] = false;
    //     } else {
    //         if(check[vec[i]] == true) {
    //             s.insert(vec[i]);
    //         }
    //     }
    // }
    set<int> :: iterator it = ok.begin();
    while(it != ok.end()){
        cout << (*it) << " ";
        it++;
    }
}

int main() {

    int t = 1;
    //cin>>t;
    while(t--) {
        __solve();
    }
    return 0;
}