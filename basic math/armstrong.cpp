#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool Armstrong(int x) {
        int num_count=(int)(log10(x)+1);
        int duplicate=x;
        long long sum=0;
        
        while(x>0)
        {
            int lastdigit=x%10;
            sum=sum+pow(lastdigit,num_count);
            x=x/10;
        }
        
        if(sum==duplicate)
        {
            return true;
        }
        else{
            return false;
        }
           if ( sum< INT_MIN || sum > INT_MAX)
        {
            return false;
        }
            
    }

    
     
};

int main(){
    int n;
    cin>>n;
    
    Solution sol;
    int result = sol.Armstrong(n);

    cout << result << endl;
    
    return 0;
}