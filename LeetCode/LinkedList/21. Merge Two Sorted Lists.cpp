#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l2 == nullptr) return l1;
        if(l1 == nullptr) return l2;

        ListNode* head = nullptr; 
        if(l1->val < l2->val) {head = l1; l1 = l1->next;}
        else                  {head = l2; l2 = l2->next;}

        ListNode* p = head;

        while(l1 && l2) {
            if(l1->val < l2->val) {
                p->next = l1;
                l1 = l1->next;
            } else {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
        }

        if(l1) {
            p->next = l1;
        } else if(l2) {
            p->next = l2;
        }

        return head;
    }
};