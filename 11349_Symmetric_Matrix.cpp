/*
	user : bipolar
	date : Apr 20 2021
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define sc(n) scanf("%lld", &n)

int32_t main() {
        int test = 1;
        int T = 1;
        scanf("%lld", &test);
        while(test--)
        {
                string a, b; cin >> a >> b;
                int n;
                scanf("%lld", &n);
                const int k = n;
                int A[k][k];
                for(int i = 0; i < k; i++)
                        for(int j = 0; j < k; j++)
                                scanf("%lld", &A[i][j]);
                /*
                for(int i = 0; i < n; i++) {
                        for(int j = 0; j < n; j++) {
                                printf("%lld ", A[i][j]);
                        }
                        printf("\n");
                }
                */
                printf("Test #%lld: ", T++);
                bool flag = false;
                for(int i = 0; i < n+1/2; i++) {
                        for(int j = 0; j < (i == n/2?(n+1)/2:n); j++) {
                                if(A[i][j] < 0) {
                                        flag = true;
                                        break;
                                }
                                // code here
                                if(A[i][j] != A[n-1-i][n-1-j]) {
                                        flag = true;
                                        break;
                                }
                        }
                        if(flag)
                                break;
                }
                if(!flag) 
                        printf("Symmetric.\n");
                else
                        printf("Non-symmetric.\n");

        }
	return 0;
}