#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];  
    }
    int minNo=arr[0];
    int maxNo=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>maxNo){
            maxNo=arr[i];
        }
        else if(arr[i]<minNo){
            minNo= arr[i];
        }
    }

    cout<<maxNo<<" "<<minNo;
}