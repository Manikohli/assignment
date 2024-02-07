#include<iostream>
using namespace std;
int main(){
  int n,i;
  cout<<"Enter a number";
  cin>>n;
  for( i=2;i<n;i++){
    if(n%i==0){
      continue;
    
    cout<<"Not prime"<<endl;
    break;
  }
  }
  if (i==n){
    cout<<"prime"<<endl;
  }

}
