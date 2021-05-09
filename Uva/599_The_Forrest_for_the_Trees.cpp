#include<bits/stdc++.h>
using namespace std;
#define int long long int 

vector<char> adj[100];

int ctr;
bool visited[100];

void dfs(char src) {
        visited[src - 'A'] = true;
        for(auto u : adj[src - 'A']) {
                if(!visited[u - 'A']) {
                        dfs(u);
                }
        }
}

int32_t main() {

        int t; cin >> t;
        cin.ignore();
        while(t--) {
                ctr = 0;
                string str;
                for(int i = 0; i < 100; i++) {
                        adj[i].clear();
                }
                while (getline(cin, str) && str[0]!='*')
                {
                        adj[(int)(str[1]-'A')].push_back(str[3]);
                        adj[(int)(str[3]-'A')].push_back(str[1]);
                }
                getline(cin, str);
                set<char> nodes;
                for(int i = 0; i < str.length(); i++) {
                        if(i%2 == 0)
                                nodes.insert(str[i]);
                }
                int tree = 0, corn = 0;

                

                printf("There are %lld tree(s) and %lld acorn(s).\n", tree, corn);
        }
        return 0;
}