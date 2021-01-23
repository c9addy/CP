#include<bits/stdc++.h>
#include <iostream>
using namespace std ;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
int t;cin>>t;
while(t--){
int n;cin>>n;
int ans=0;
for(int i=0;i<n;i++){
    int m;cin>>m;
    ans+=m/3;
}
cout<<ans<<endl;
}
}