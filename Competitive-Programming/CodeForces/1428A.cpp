#include<bits/stdc++.h>
#include <iostream>
using namespace std ;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
while(t--){
    int x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
        cout<<abs(y1-y2)<<endl;
    }
    else if(y1==y2){
        cout<<abs(x1-x2)<<endl;
    }
    else{
        cout<<abs(y1-y2)+abs(x1-x2)+2<<endl;
    }
}
}