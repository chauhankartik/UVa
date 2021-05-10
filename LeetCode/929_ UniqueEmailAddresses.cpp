class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> final;
        for(int i = 0; i < emails.size(); i++) {
            string s = emails[i];
            bool seen_at = false;
            bool seen_plus = false;
            string new_str = "";
            for(int j = 0; j < s.length(); j++) {
                if(s[j] == '@')
                    seen_at =true;
                else if(s[j] == '+')
                    seen_plus = true;
                else if(seen_at) {
                    new_str += s[j];
                }
                else {
                    if(!seen_plus)
                        if(s[j] != '.')
                            new_str += s[j];
                        else if(s[j] == '+')
                                seen_plus = true;
                }
            }
            final.insert(new_str);
        }
        return final.size();
    }
};