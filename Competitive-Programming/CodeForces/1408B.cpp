#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
for(int i=0;i<t;i++){
int n,k;cin>>n>>k;
vector<int> vec(n);
for(int j=0;j<n;j++){
    cin>>vec[j];
}
int diff=0;
for(int j=1;j<n;j++){
    if(vec[j]>vec[j-1]){
        diff++;
    }
}
if(k==1){
    if(diff==0){
        cout<<1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
else{
    cout <<max(1,((diff+(k-2))/ (k - 1))) << '\n';
}
}
}
