#include<bits/stdc++.h>
using namespace std;
#define INF 2e9 + 10

int v[100005];
int segmentTree[400005];

void buildTree(int segmentIdx,
	       int segmentStart,
	       int segmentEnd) {
	if(segmentStart == segmentEnd) {
		segmentTree[segmentIdx] = v[segmentStart];
                return;
        }
		
	int mid = (segmentStart + segmentEnd) / 2;
	buildTree(2 * segmentIdx, segmentStart, mid);
	buildTree(2 * segmentIdx + 1, mid + 1, segmentEnd);
		
	segmentTree[segmentIdx] = min(segmentTree[2 * segmentIdx], segmentTree[2 * segmentIdx + 1]);
}

int queryTree(int segmentIdx,
	      int segmentStart,
	      int segmentEnd,
	      int queryStart,
	      int queryEnd) {
	if(segmentStart > queryEnd || segmentEnd < queryStart) {
        	return INF;
	}
		
	if(segmentStart >= queryStart && segmentEnd <= queryEnd) {
		return segmentTree[segmentIdx];
	}
	
	int mid = (segmentStart + segmentEnd) / 2;
	int leftResult = queryTree(2 * segmentIdx, segmentStart, mid, queryStart, queryEnd);
	int rightResult = queryTree(2* segmentIdx + 1, mid + 1, segmentEnd, queryStart, queryEnd);
	
	return min(leftResult, rightResult);
}


int main() {

        int n; cin >> n;
        for(int i = 1; i <= n; i++) cin >> v[i];

        buildTree(1, 1, n);
        int q; cin >> q;
        while(q--) {
                int a, b; cin >> a >> b;
                cout << queryTree(1, 1, n, a+1, b+1) << endl;
        } 
        return 0;
}