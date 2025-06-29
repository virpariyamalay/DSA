#include<bits/stdc++.h>
using namespace std;

//a=[1,2,5,7,8,9]
//b=[2,3,4,5,6,7]

//a=[2,3,4,5,6,7]
//b=[1,2,5,7,8,9]


class Solution{
    public:
       vector<int> intersection(vector<int> &a,vector<int> &b){
        int i=0;
        int j=0;
        int n1=a.size();
        int n2=b.size();
        vector<int> ans;
        while(i<n1 && j<n2){
          
               if(a[i]<b[j]){
                    i++;
               }   

               else if(b[j]<a[i]){
                    j++;
               }else{
                    ans.push_back(a[i]);
                    i++;
                    j++;
               }     
        }
        return ans;

       } 
};

int main(){
    int n1;
    int n2;

    cin>>n1>>n2;
    vector<int> a(n1);
    vector<int> b(n2);

    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int j=0;j<n2;j++){
        cin>>b[j];
    }   
    Solution s;
    vector<int> result=s.intersection(a,b);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

}