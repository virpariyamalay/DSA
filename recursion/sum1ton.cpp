#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
   
public:
    int sum(int n) {
        if(n==1)
        {
            return 1;
        }
        else{
            return n+sum(n-1);
        }
        
    }

};

int main(){
    int n;
    cin>>n;
    
    Solution sol;
    int result=sol.sum(n);
    cout<<result<<endl;
    
    return 0;
}