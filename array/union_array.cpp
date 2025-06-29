#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector <int> unionarray(vector <int> &a,vector <int> &b ){
            set<int> st;

            for(int i=0;i<a.size();i++){
                st.insert(a[i]);
            }
            for(int i=0;i<b.size();i++){
                st.insert(b[i]);
            }

            vector<int> temp;

            for(auto it:st){
                temp.push_back(it);
            }

            return temp;
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
    vector<int> result=s.unionarray(a,b);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<< " ";
    }
}