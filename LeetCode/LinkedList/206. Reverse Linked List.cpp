#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev, *current, *next;
        current = head;

        prev = nullptr, next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next; // move current ahead
        }
        return prev;
    }   
};