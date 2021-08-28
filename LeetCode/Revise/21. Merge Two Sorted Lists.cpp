#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr);
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head, *ptr;
        if(l1 == nullptr && l2 == nullptr) return head;
        if(l1 && !l2) return l1;
        if(l2 && !l1) return l2;
        if(l1->val < l2->val) {
            head = l1;
            ptr = head;
            l1 = l1->next;
        } else {
            head = l2;
            ptr = head;
            l2 = l2->next;
        }

        while(l1 && l2) {
            if(l1->val < l2->val) {
                ptr->next = l1;
                ptr = ptr->next;
                l1 = l1->next;
            }
            else {
                ptr->next = l2;
                ptr = ptr->next;
                l2 = l2->next;
            }
        }

        while(l1) {
            ptr->next = l1;
            ptr = ptr->next;
            l1 = l1->next;
        }

        while(l2) {
            ptr->next = l2;
            ptr = ptr->next;
            l2 = l2->next;
        }

        return head;
    }
};