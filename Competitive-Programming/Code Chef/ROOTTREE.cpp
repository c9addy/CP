#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
while(t--){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=1;i<n;i++){
        int a,b;cin>>a>>b;
        arr[b-1]++;
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c++;
        }
    }
    cout<<c-1<<endl;
}
}