#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() {}
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < lists.size(); i++) {
            ListNode *head = lists[i];
            while(head) {
                pq.push(head->val);
                head = head->next;
            }
        }
        ListNode *head = nullptr, *ptr;
        while(pq.empty() == false) {
            
        }
        return head;
    }
};

/*
class Solution {
public:
    ListNode* mergeTwoSorted(ListNode* l1, ListNode* l2) {
        ListNode *head, *ptr;
        if(l1 == nullptr && l2 == nullptr) return head;
        if(l1 && !l2) return l1;
        if(l2 && !l1) return l2;

        if(l1->val < l2->val) {
            head = l1;
            ptr = head;
            l1 = l1->next;
        }
        else {
            head = l2;
            ptr = head;
            l2 = l2->next;
        }

        while(l1 && l2) {
            if(l1->val < l2->val) {
                ptr->next = l1;
                l1 = l1->next;
                ptr = ptr->next;
            }
            else {
                ptr->next = l2;
                l2 = l2->next;
                ptr = ptr->next;
            }
        }

        while(l1) {
            ptr->next = l1;
            l1 = l1->next;
            ptr = ptr->next;
        }

        while(l2) {
            ptr->next = l2;
            l2 = l2->next;
            ptr = ptr->next;
        }

        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* res;
        if(lists.size() == 0) return res;
        while(lists.size() != 1) {
            ListNode *a, *b;
            a = lists.back(), lists.pop_back();
            b = lists.back(), lists.pop_back();
            res = mergeTwoSorted(a, b);
            lists.push_back(res);
        }
        return lists[0];
    }
};
*/