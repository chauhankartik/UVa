#include<bits/stdc++.h>
using namespace std;
#define int long long int

// int dx[] = {1, 0, -1, 0};
// int dy[] = {0, 1, 0, -1};

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int32_t main() {
	
	int t; cin >> t;
	while(t--) {
		int n, m; cin >> n >> m;
		vector<string> adj;
		string s;
		for(int i = 0; i < n; i++) {	
			cin >> s;
			adj.push_back(s);
		}
		
		vector<int> lands;
		queue<pair<int, int>> q;
		int temp = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				temp = 0;
				if(adj[i][j] == '1') {
					adj[i][j] = '0';
					// temp += 1;
					q.push({i, j});
					
					while(!q.empty()) {
					
						int a = q.front().first;
						int b = q.front().second;
						q.pop();
						temp += 1;
					
						for(int d = 0; d < 4; d++) {
							int xx = a + dx[d];
							int yy = b + dy[d];
						
							if(xx < 0 || xx >= n || yy < 0 || yy >= m) {
								continue;
							}
							if(adj[xx][yy] == '1') {
								adj[xx][yy] = '0';
								q.push({xx, yy});
							}
						}
					}
					lands.push_back(temp);
				}
			}
		}
		
		sort(lands.begin(), lands.end(), greater<int>());
		//for(auto c : lands) cout << c << " ";
		int ans = 0;
		for(int i = 1; i < lands.size(); i += 2) ans += lands[i];
		cout << ans << endl;
	}
	return 0;
}
