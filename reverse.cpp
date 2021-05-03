#include<bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    stack<int> s;
    for(int i = 0, x; i < n; i++) {
        cin >> x;
        s.push(x);
    }
    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}