#include<bits/stdc++.h>
using namespace std;


// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};


class Solution {
public:
        int getImportance(vector<Employee*> employees, int id) {
            /*
                employees -> _____ ______ ______ ______ _____  class Employee
            */

                Employee* myEmp;
                for(auto c : employees) {
                        if(c->id == id) {
                                myEmp = c;
                                break;
                        }
                }

                queue<Employee*> q;
                int res = myEmp->importance;
                q.push(myEmp);

                while (!q.empty())
                {
                        Employee* n = q.front();
                        q.pop();

                        vector<int> current = n->subordinates;
                        for(auto c : current) {
                                q.push()
                        }
                }
                
        }
};