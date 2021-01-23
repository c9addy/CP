#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
for(int i=0;i<t;i++){
    int N , K, X ,Y;cin>>N>>K>>X>>Y;
    int curr=X;
    bool reached=false;
    bool loop=false;
    while(reached==false){
        if(curr==Y){
            reached=true;
            break;
        }
        else if(curr==X and loop ==true){
            break;
        }
        curr=(curr+K)%N;
        loop=true;
    }
    string ans = (reached ==true  ? "YES" : "NO");
    cout<<ans<<endl;
}
}