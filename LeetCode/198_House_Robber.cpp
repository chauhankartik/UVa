#include<bits/stdc++.h>
using namespace std;
int dp[151][2];         // dp[i][stole]

class Solution {
public:
        int rob(vector<int>& nums) {
                int n = nums.size();
                for(int i = n-1; i >= 0; i--) {
                        if(i == n-1){
                                dp[i][1] = 0;
                                dp[i][0] = nums[i];
                        }
                        else{
                                dp[i][0] = max(nums[i] + dp[i+1][1], dp[i+1][0]);
                                dp[i][1] = dp[i+1][0];
                        }
                }
                return dp[0][0];
        }
};

int main() {

        Solution obj;
        int n;
        vector<int> nums;
        while(cin >> n) nums.push_back(n);
        cout << obj.rob(nums) << endl;
        return 0;
}