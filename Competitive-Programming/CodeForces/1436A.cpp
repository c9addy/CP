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
    int n,m;cin>>n>>m;
    int sum=0;
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        sum+=r;
    }
    string ans = (sum ==m  ? "YES" : "NO");
    cout<<ans<<endl;

}
}