#include<bits/stdc++.h>
using namespace std;

/*      
CONSTRAINTS:
        1 <= s.length <= 10**5
        s consists of English letters, digits, and dashes '-'.
        1 <= k <= 10**4
*/

class Solution {
public:
        string licenseKeyFormatting(string& s, 
                                    int     k) 
        {
                string new_str = "";
                for(int i = 0; i < s.length(); i++) {
                        if(s[i]!='-') new_str += toupper(s[i]);
                }
                int x = 0, j = new_str.length() - 1;
                s = "";
                while(j >= 0)
                {
                        s += new_str[j];
                        j -= 1;
                        x += 1;
                        if(x == k) {
                                x = 0;
                                s += '-';
                        }
                }
                new_str = s;
                s = "";
                bool flag = false;
                for(int j = new_str.length() - 1; j >= 0; j--) {
                        if(new_str[j] != '-' && flag == false) {
                                flag = true;
                        }
                        if(flag) {
                                s += new_str[j];
                        }
                }
                // reverse(s.begin(), s.end());
                return s;
        }
};

int main() {
        string s; cin >> s;
        int k; cin >> k;
        Solution obj;
        cout << obj.licenseKeyFormatting(s, k) << endl;
        return 0;
}