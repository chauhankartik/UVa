#include<bits/stdc++.h>
using namespace std;

struct ListNode{
        int val;
        ListNode* next;
};

class Solution {
public:
        int getDecimalValue(ListNode* head) {
                ListNode* temp = head;
                string s;
                while(temp != nullptr) {
                        s += to_string(temp->val);
                        temp = temp->next;
                }
                int res = 0;
                int j = 0;
                for(int i = s.length() - 1; i >= 0; i--) {
                        res += ((s[i] - '0') * (1 << j));
                        j += 1;
                }
                return res;
        }
};

int main() {

}