#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            
        }
    }
    int x;
    bool flag=false;
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
            flag = true;
            cout<<i<<" "<<j<<"\n";
        }
    }
}
if(flag==true){
    cout<<"element found";
}else{
    cout<<"element not found";
}
return 0;
}