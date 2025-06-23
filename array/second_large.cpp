#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> &arr,int n){
    int largest=arr[0];
    int secondlarge=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>secondlarge && arr[i]!=largest){
            secondlarge=arr[i];
        }
    }
    
    return secondlarge;
    
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int result=secondLargestElement(arr,n);
    cout<<"second largest element is "<<result;
}