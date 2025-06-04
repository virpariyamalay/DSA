#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{
    vector<int> v;

public:
    vector<int> allDivisor(int x)
    {
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution sol;
    vector<int> result = sol.allDivisor(n);
    for (auto i : result)
    {
        cout << i << endl;
    }

    return 0;
}