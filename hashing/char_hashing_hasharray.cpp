#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    //precompute
    int hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']+=1; 
    }
    
    
    int n;
    cin>>n;
   while(n--)
   {
       char c;
       cin>>c;
       //fetch
       int value= c-'a';
       
       cout<<hash[value]<<endl;
   }
}