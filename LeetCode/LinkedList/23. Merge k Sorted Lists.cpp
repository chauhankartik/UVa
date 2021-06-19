#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())   return nullptr;

        while(lists.size() > 1) {
            lists.push_back(mergeTwoLists(lists[0], lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }

        return lists.front();
    }

   ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode temp(INT_MIN);
        ListNode *tail = &temp;

        while(l1 && l2) {
            if(l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            }else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        tail->next = l1 ? l1 : l2;
        return temp.next;       
    }
};