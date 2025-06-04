#include <iostream>
#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        int duplicate=x;
        long long reversenum=0;

        if(x<0 || x%10==0 && x!=0){
            return false;
        }

        while(x>0)
        {
            int lastdigit=x%10;
             reversenum=(reversenum*10)+lastdigit;
            x=x/10;  
        }

        if(reversenum == duplicate)
        {
            return true;
        }
        else{
            return false;
        }
        if ( reversenum < INT_MIN || reversenum > INT_MAX){
            return false;
        }
    }
};