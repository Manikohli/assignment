#include<iostream>
using namespace std;
int sumOfNaturalNum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=n*(n+1)/2;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int ans = sumOfNaturalNum(n);
    cout<<ans<<endl;
    return 0;
}