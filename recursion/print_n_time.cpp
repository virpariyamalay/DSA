#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
   
public:
    void printname(int i,int n) {

        if(i == n)
        {
            return ;
        }
        else{
             cout<<"hello from malay "<<i+1<<endl;
        
             printname(i+1,n);
        }
       
        
    }

};

int main(){
    int n;
    int i=0;
    cin>>n;
    
    Solution sol;
    sol.printname(i,n);

    
    
    return 0;
}