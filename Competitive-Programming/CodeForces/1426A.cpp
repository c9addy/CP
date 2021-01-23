#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
for(int i=0;i<t;i++){
int n,x;cin>>n>>x;
int cou=1;

n-=2;
if(n<=0){cou=0;}
while(n>x){
    n-=x;
    cou++;
    
}
cou++;
cout<<cou<<endl;
}
}