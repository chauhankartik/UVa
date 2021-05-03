#include<bits/stdc++.h>
using namespace std;
#define sc(n) scanf("%lld", &n)
#define int long long int
const int dx[4][2] = {{-1,0}, {0,-1}, {0,1}, {1,0}};
int a[3][3];

void f(int i, int j) {
        a[i][j] += 1;
        a[i][j] = a[i][j] % 10;
        for(int m = 0; m < 4; m++) {
                int ii = i + dx[m][0];
                int jj = j + dx[m][1];
                if(ii > -1 && ii < 3 && jj > -1 && jj < 3) {
                        a[ii][jj] += 1;
                        a[ii][jj] %= 10;
                }
        }
}

int32_t main() {

        queue<string> moves;
        string s;
        while(getline(cin, s)) {
                moves.push(s);
        }
        int n = moves.size();
        for(auto i = 0; i < n; ++i) {
                
                for(int q = 0; q < 3; q++) {
                        for(int p = 0; p < 3; p++) {
                                a[q][p] = 0;
                        }
                }
                string current = moves.front();
                moves.pop();
                for(auto c:current) {
                        int idx = c - 97;
                        switch (idx)
                        {
                        case 0:
                                f(0,0);
                                break;
                        case 1:
                                f(0,1);
                                break;
                        case 2:
                                f(0,2);
                                break;
                        case 3:
                                f(1,0);
                                break;
                        case 4:
                                f(1,1);
                                break;
                        case 5:
                                f(1,2);
                                break;
                        case 6:
                                f(2,0);
                                break;
                        case 7:
                                f(2,1);
                                break;
                        case 8:
                                f(2,2);
                                break;
                        default:
                                break;
                        }
                }
                printf("Case #%d:\n", i+1);
                for(int i = 0; i < 3; i++) {
                        for(int j = 0; j < 3; j++) {
                                if(j < 2)
                                        printf("%lld ", a[i][j]);
                                else 
                                        printf("%lld\n", a[i][j]);
                        }
                }
        }
        return 0;
}