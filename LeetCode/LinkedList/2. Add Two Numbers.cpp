#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* temp = l1;
        while(l1 && l2) {
            int curr = l1->val + l2->val + carry;
            if(curr == 10) {
                carry = 1;
                l1->val = 0;
            }else {
                l1->val = curr;
                
            }
        }    
    }
};