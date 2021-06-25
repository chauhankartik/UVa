#include <bits/stdc++.h>
using namespace std;

#define int long long int

class Employee
{
public:
    int id;
    int importance;
    vector<int> subordinates;
};

class Solution
{
public:
    int getImportance(vector<Employee *> employees, int id)
    {
        unordered_map<int, Employee *> mp;
        int mx = -1;
        for (int i = 0; i < employees.size(); ++i)
        {
            mp[employees[i]->id] = employees[i];
            mx = max(mx, employees[i]->id);
        }

        int res = 0;
        int vis[100005];
        memset(vis, 0, sizeof vis);
        queue<int> q;
        res += mp[id]->importance;
        q.push(id);
        while (!q.empty())
        {
            int src = q.front();
            q.pop();
            if (mp[src]->subordinates.empty() == false)
            {
                for (auto emp : mp[src]->subordinates)
                {
                    if (!vis[mp[emp]->id])
                    {
                        res += mp[emp]->importance;
                        vis[mp[emp]->id] = 1;
                        q.push(emp);
                    }
                }
            }
        }
        return res;
    }
};