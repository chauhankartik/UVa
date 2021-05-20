#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
                string a = "", b = "";
                while(l1->next != nullptr) {
                        a += to_string(l1->val);
                        l1 = l1->next;
                }
                while(l2->next != nullptr) {
                        b += to_string(l2->val);
                        l2 = l2->next;
                }
                reverse(a.begin(), a.end());
                reverse(b.begin(), b.end());
                int m, n;
                m = stoi(a), n = stoi(b);
                m = m + n;
                a = to_string(m);
                ListNode head;
                
                for(int i = 0; i < a.length(); i++) {

                }
        }
};