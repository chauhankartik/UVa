#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(5002, vector<int> (5002, -1));

int solve(int i, int j, string& a, string& b)
{
        if(i == a.length() || j == b.length())
        {
                return dp[i][j] = max((int)a.length()-i, (int)b.length()-j);
        }

        if(dp[i][j] != -1)
                return dp[i][j];
        int ans;
        if(a[i] == b[j])
                return ans = solve(i+1, j+1,a,b);

        int op1 = 1 + solve(i, j+1, a, b); // insert
        int op2 = 1 + solve(i+1, j, a, b); // delete
        int op3 = 1 + solve(i+1, j+1, a, b); // replace
        ans = min(op1, min(op2, op3));

        return dp[i][j] = ans;

}

int main() {
        string a, b;
        cin >> a >> b;  
        cout << solve(0,0,a,b) << endl;
        return 0;
}