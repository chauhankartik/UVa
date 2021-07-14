#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};


class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr) return head;

        int cnt = 0;
        ListNode *t = head;
        ListNode *last;
        while(t) {
            cnt += 1;
            if(t->next == nullptr) last = t;
            t = t->next;
        }
        
        last->next = head; // circle;

        if(k %= cnt) {
            for(int i = 0; i < cnt - k; i++) {
                last = last -> next;
            }
        }

        t = last->next;
        last->next = nullptr;
        return t;
    }
};