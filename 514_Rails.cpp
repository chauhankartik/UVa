/*
        user : bipolar
        date : 22-04-2021
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        int n;
        while (scanf("%lld", &n) == 1 && n != 0)
        {
                int a;
                while(scanf("%lld", &a) == 1 && a != 0) {
                        vector<int> output(n);
                        vector<int> input(n);
                        for(int i = n - 1; i >= 0; i--) {
                                input[i] = n - i;
                        }
                        output[0] = a;
                        for(int i = 1; i < n; i++) {
                                scanf("%lld", &output[i]);
                        }
                        vector<int> res;
                        stack<int> s;
                        vector<int> :: iterator it = output.begin();
                        while (input.empty() == false || s.empty() == false)
                        {       

                                while(s.size() != 0 && it != output.end() && s.top() == *it) {
                                        res.push_back(s.top());
                                        s.pop(); 
                                        it++;
                                }
                                if(it == output.end()) {
                                        break;
                                }
                                if(input.empty() == true && s.size() != 0 && it != output.end() && s.top() != *it) {
                                        break;
                                } 
                                if(input.empty() == false) {
                                        s.push(input.back());
                                        input.pop_back();
                                }
                        }
                        if(res.size() == n) {
                                cout << "Yes" << endl;
                        } else {
                                cout << "No" << endl;
                        }
                }
                printf("\n");
        }
}