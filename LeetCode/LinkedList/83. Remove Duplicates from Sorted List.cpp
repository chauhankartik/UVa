#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode* next;
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;

        while (curr)
        {
            while(curr->next && curr->next->val == curr->val) {
                curr->next = curr->next->next;
            }

            curr = curr->next;
        }

        return head;
    }
};