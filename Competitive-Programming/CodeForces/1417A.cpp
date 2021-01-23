#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
for(int i=0;i<t;i++){
vector<int> vec;
int n,k;cin>>n>>k;
for(int j=0;j<n;j++){
    int a;cin>>a;
    vec.push_back(a);
}
sort(vec.begin(), vec.end());
int ans=0;
for(int j=1;j<n;j++){
    ans+=((k-vec[j])/vec[0]);
}
cout<<ans<<endl;
}
}