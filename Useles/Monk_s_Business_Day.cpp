#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int a;
    int b;
    int w;
    Node(int u, int v, int weight) {
        a = u;
        b = v;
        w = weight;
    }
};

int main() {

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<Node *> edges;
        for(int i = 0; i < m; i++) {
            int a, b, c; cin >> a >> b >> c;
            Node* x = new Node(a, b, c);
            edges.push_back(x);
        }
        
    }
    return 0;
}