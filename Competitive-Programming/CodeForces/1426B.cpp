#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
for(int i=0;i<t;i++){
int n,m;cin>>n>>m;
    bool test=false;
    for (int j=0;j<n;j++){
        int a1,a2,a3,a4;cin>>a1>>a2>>a3>>a4;
        if(a2==a3){
            
            test=true;
        }
    }
    if(m%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        if(test==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


}
}