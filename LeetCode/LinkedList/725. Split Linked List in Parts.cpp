#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> res;
        if(head == nullptr) {
            while(k--) {
                res.push_back({});
            }
            return res;
        }

        int cnt = 0;
        ListNode *t = head;

        while(t) {
            cnt += 1;
            t = t -> next;
        }

        if(cnt <= k) { // each segment will have 1 or 0 node
            t = head;
            while(k) {
                head = head ? head->next : nullptr;
                if(t)
                    t->next = nullptr;
                res.push_back(t);
                k -= 1;
                t = head;
            }
        }

        /*
            k < cnt;
            min element in each segment = cnt / k;
            also remaining ele = cnt - (k * min in each segment)
            add 1 at a time in each pair
        */

        else {
            int min_ele_each_seg = cnt / k;
            int rem = cnt - (k * min_ele_each_seg);

            ListNode *move;
            while(cnt) {
                move = head;
                t = head;
                int curr_seg = min_ele_each_seg;
                
                while(curr_seg) {
                    t = head;
                    head = head ? head->next : nullptr;
                    cnt -= 1;
                    curr_seg -= 1;
                }

                if(rem > 0) {
                    t = head;
                    head = head ? head->next : nullptr;
                    rem -= 1;
                    cnt -= 1;
                }
                t->next = nullptr;
                res.push_back(move);
            }
        }
        return res;
    }
};