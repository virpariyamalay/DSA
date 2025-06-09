#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
   
public:
    void printnto1(int n) {

        if(n<1)
        {
            return ;
        }
        else{
             cout<<n<<endl;
             printnto1(n-1);
        }
       
        
    }

};

int main(){
    int n;
  
    cin>>n;
    
    Solution sol;
    sol.printnto1(n);

    
    
    return 0;
}