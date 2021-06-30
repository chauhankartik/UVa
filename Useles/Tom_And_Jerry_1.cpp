// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        vector<int> res;
        int low = 0; 
        int sum = 0;
        for(int i = 0; i < n; i+= 1) {
            sum += arr[i];
            if(sum > s) {
                while(sum > s and low < n) {
                    sum -= arr[low];
                    low += 1;
                }
            }
            if(sum == s) {
                res.push_back(low+1);
                res.push_back(i+1);
                return res;
            }
        }
        if(res.size() == 0) res.push_back(-1);
        return res;
    }
};
// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends