#include<bits/stdc++.h>
using namespace std;
#define int long long int

#define sc(n) scanf("%lld", &n)
const int moves[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

int32_t main() {

    int n, r, c, k;
    while(scanf("%lld %lld %lld %lld", &n, &r, &c, &k) == 4 && (n&&r&&c&&k)) {
        vector<vector<int>> a(r, vector<int>(c));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                sc(a[i][j]);
            }
        }

        int riv[n];
        riv[n-1] = 0;
        for(int i = 0; i < n - 1; i++) {
            riv[i] = i + 1;
        }
        // solve

        while(k--) {
            vector<vector<int>> temp = a;
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    for(int m = 0; m < 4; m++) {
                        int y = i + moves[m][0];
                        int x = j + moves[m][1];

                        if(y > - 1 && y < r && x > - 1 && x < c && riv[a[i][j]] == a[y][x])
                            temp[y][x] = a[i][j];
                    }
                }
            }
            a = temp;
        }

        // print
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                printf("%lld", a[i][j]);
                if(j + 1 < c) 
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
