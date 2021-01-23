#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
for(int i=0;i<t;i++){
    long long int a,b,c,d;cin>>a>>b>>c;
    d=max(a,b);

    cout<<max(d,c)<<endl;
    
}
}