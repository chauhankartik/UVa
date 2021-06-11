#include<bits/stdc++.h>
using namespace std;
#define int long long int

int binary_search(int low,
                  int high,
                  const int target,
                  const vector<int> v) {
    int size = 0;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(v[mid] == target) {
            int temp = mid;
            size += 1;
            mid += 1;
            while(mid <= high and v[mid] == target) {
                size += 1;
                mid += 1;
            } 
            temp -= 1;
            while(temp >= low and v[temp] == target) {
                size += 1;
                temp -= 1;
            }

            return size;
        }
        else if(v[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return 0;
}


int32_t main() {

    int n; cin >> n;
    vector<int> a(n), b(n), c(n), d(n);

    for(size_t i = 0; i < n; ++i) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    vector<int> s1, s2;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            s1.push_back(a[i]+b[j]);
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            s2.push_back(-(c[i]+d[j]));
        }
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int low = 0, high = 0;
    int res = 0LL;
    for(int i = 0; i < s1.size(); ++i) {
        low = binary_search(0, s2.size() - 1, s1[i], s2);
        high = binary_search(0, s2.size() - 1, s1[i], s2);
        res += (high * low);
    }

    cout << res << endl;
    return 0;
}