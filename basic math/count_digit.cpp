#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    int count=0;
public:
    int countDigit(int n) {
        if(n==0)
        {
            return 1;
        }
        
    int count= (int)(log10(n)+1);
    return count;
    }

};

int main(){
    int n;
    cin>>n;
    
    Solution sol;
    int result = sol.countDigit(n);

    cout << result << endl;
    
    return 0;
}



//////or
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    int count=0;
public:
    int countDigit(int n) {
        if(n==0)
        {
            return 1;
        }
        while(n>0)
        {
            int digit=n%10;
            count++;
            n=n/10;
            
        }
        return count;
    }
   

};

int main(){
    int n;
    cin>>n;
    
    Solution sol;
    int result = sol.countDigit(n);

    cout << result << endl;
    
    return 0;
}