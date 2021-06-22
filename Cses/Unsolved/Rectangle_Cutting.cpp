#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp(501, vector<int>(501, 0));

int solve(int a, int b)
{       
        for(int i = 1; i <= a; i++) {
                for(int j = 1; j <= b; j++) {
                        
                }
        }
        return dp[a][b];
}       


int main() {
        int a, b; cin >> a >> b;
        cout << solve(a,b) << endl;
        return 0;
}