#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    int i=0;
    bool found = false;

    while(i<n){
    if(arr[i]==key){
        cout<<i<<endl;
        found = true;
        break;
    }
        i++;
    }

    if(!found){
        cout<<"-1"<<endl;
    }

    return 0;
}