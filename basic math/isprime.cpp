#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


class Solution {
    int count=0;
public:
   bool isPrime(int x) {
       for(int i=1;i<=x;i++)
       {
           if(x%i==0)
           {
               count++;
           }
           
       }
       if(count==2)
       {
           return true;
       }
       else
       {
           return false;
       }
    }

    
     
};

int main(){
    int n;
    cin>>n;
    
    Solution sol;
    bool result = sol.isPrime(n);
   cout<<result;

    
    
    return 0;
}