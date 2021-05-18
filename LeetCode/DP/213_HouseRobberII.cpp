#include<bits/stdc++.h>
using namespace std;

class Solution {
        int dp[110][2]; // dp[i][stole first or not][stoled last]
public:
        int helper(vector<int>& nums) {
                int n = nums.size();
                if(n == 1) return nums[0];
                if(n == 2) return max(nums[0], nums[1]);
                for(int i = n - 1; i >= 0; i--) {
                        if(i == n - 1) {
                                dp[i][0] = nums[i];
                                dp[i][0] = 0;
                                dp[i][1] = dp[i][1] = 0;
                        }
                        else {
                                dp[i][0] = max((i+2 != n - 1) ? nums[i] + dp[i+2][0] : dp[i][0], dp[i+1][0]);
                                dp[i][1] = max(nums[i] + dp[i+2][1], dp[i+1][1]);      
                        }
                }
                return max(dp[0][0], dp[0][1]);
        }
        int rob(vector<int>& nums) {
                memset(dp, 0, sizeof dp);
                return helper(nums);
        }
};

int main() {

        Solution obj;
        vector<int> vec; int n;
        while(cin >> n) vec.push_back(n);
        cout << obj.rob(vec) << endl;
        return 0;
}