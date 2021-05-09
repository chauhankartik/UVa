/*
        Problem :

        Find the number of lists that exist and satisfy the following:
        1.  list contains exactly 'N' elements
        2.  all elements of the list are between 'low' and 'high'
        3.  sum of all elements is even

        Return answer modulo 10^9+7

        Constraints
        1 <= n <= 10^6
        1 <= low <= high <= 10^6

        Sample
        (n=3,low=1,high=2) -> 4
        (n=2,low=1,high=10) -> 50

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
        int n; cin >> n;
        int mod = 1e9 + 7;
        int low, high; cin >> low >> high;

        vector<vector<int>> dp(high+1, vector<int>(n+1, 0)); 

        /*
                dp[i][j] : no of list of len n having even sum element in range low - i
        */

        for(int i = low; i <= high; i++) {
                for(int j = 1; j <=n; j++) {
                        if(j == 1)
                        {
                                if(i%2 == 0) dp[i][j] += 1;
                        }
                        else
                        {
                        }
                }
        }

        cout << dp[high][n] << endl;
        
        return 0;
}