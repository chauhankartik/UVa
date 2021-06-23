#include<bits/stdc++.h>
using namespace std;
#define int long long int 

queue<int> q;
int vis[20001];
int parent[20001];

int32_t main() {

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        q.push(1);
        int rem = 1 % n;
        while(rem != 0 && !q.empty()) {
            int r = q.front();
            q.pop();
            q.push(10*r);
            q.push(10*r+1);
            
        }
    }   
    
    return 0;
}