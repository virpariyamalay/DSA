#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{

public:
    int gcd(int a, int b)
    {
        while (a > 0 && b > 0)
        {
            if (a > b)
            {
                a = a % b;
            }
            else
            {
                b = b % a;
            }
        }
        if (a == 0)
        {
            return b;
        }
        else
        {
            return a;
        }
    }
};

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;

    Solution sol;
    int result = sol.gcd(a, b);
    cout << result;

    return 0;
}