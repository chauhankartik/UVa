#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    /*
     [2,7,4,1,8,1]
    */
    
        priority_queue<int> heap;
        for(int i = 0; i < stones.size(); i++) {
            heap.push(stones[i]);
        }

        while(heap.size() > 1) {
            int a = heap.top();
            heap.pop();
            int b = heap.top();
            heap.pop();
            if(a == b) {
                a = 0;
                b = 0;
            }
            else {
                a = a - b;
                b = 0;
                heap.push(a);
            }
        }

        if(heap.size() == 0) return 0;
        else 
            return heap.top();
    }
};