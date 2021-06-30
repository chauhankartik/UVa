#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* sentinel(-1);
        sentinel->next = head;

        ListNode* curr = head;
        ListNode* prev = sentinel;

        while(head) {
            if(head->next != nullptr && head->val == head->next->val) {
                while(head->next!=nullptr && head->val == head->next->val) {
                    head = head->next;
                }
                prev->next = (head != nullptr) ? head->next : nullptr;
            } else {
                prev = prev->next;
            }
            head = head->next;
        }
        return sentinel->next;
    }
};