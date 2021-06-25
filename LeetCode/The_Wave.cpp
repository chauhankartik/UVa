#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &c : v)
        cin >> c;
    sort(v.begin(), v.end());
    while (q--)
    {
        int x;
        cin >> x;

        int low = 0;
        int high = n - 1;
        int pos = -1;
        int idx = 0;
        while (low <= high)
        {
            int mid = (low + (high - low) / 2);
            if (v[mid] == x)
            {
                pos += 1;
                break;
            }
            else if (v[mid] < x)
            {
                idx = mid;
                low = mid + 1;
                if (low <= n - 1 and v[low] > x)
                {
                    idx = low;
                    break;
                }
            }
            else if (v[mid] > x)
            {
                high = mid - 1;
                if (mid - 1 >= 0 and v[mid - 1] < x)
                {
                    idx = mid;
                    break;
                }
            }
        }
        if (pos == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int neg = n - idx;
            if (neg % 2)
            {
                cout << idx << endl;
                cout << "NEGATIVE" << endl;
            }
            else
            {
                cout << "POSITIVE" << endl;
            }
        }
    }
    return 0;
}