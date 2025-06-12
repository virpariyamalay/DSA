#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
   
public:
    int fact(int n) {
        if(n==1)
        {
            return 1;
        }
        else{
            return n * fact(n-1);
        }
        
    }

};

int main(){
    int n;
    cin>>n;
    
    Solution sol;
    int result=sol.fact(n);
    cout<<result<<endl;
    
    return 0;
}