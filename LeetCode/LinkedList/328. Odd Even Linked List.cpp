#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr) return head;
        ListNode *odd = head, *even = head->next;
        ListNode *firstEven = even;

        while((even && even->next)) {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = firstEven;
        /*
            7 -> 2 -> 3 -> 4 -> 5
            
            7 -> 3 -> 4 -> 5
            2 -> 4 -> 5

            7 -> 3 -> 5
            2 -> 4

            7 -> 3 -> 5 -> 2 -> 4
        */

        /*
            7 -> 2 -> 3 -> 4

            7 -> 3 -> 4
            2 -> 4

            7 -> 3
            2 -> 4

            7 -> 3 -> 2 -> 4
        */
        return head;
    }
};