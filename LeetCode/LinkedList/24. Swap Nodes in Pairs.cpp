#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *a, *b;
        a = head;
        if(a == nullptr) return nullptr;
        b = head->next;
        if(b == nullptr) return head;

        while(a && b) {
            swap(a->val, b->val);
            a = b->next;
            b = a ? a->next : nullptr;
        }

        return head;
    }
};