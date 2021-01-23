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
int max=0;
vector<int> vec(t);
for(int i=0;i<t;i++){
    cin>>vec[i];
}
for(int i=0;i+1<t;i++){
    if(max<vec[i]+vec[i+1]){
        max=vec[i]+vec[i+1];
    }
}
cout<<max<<endl;
}