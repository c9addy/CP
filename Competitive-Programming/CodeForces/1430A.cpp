#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
void solve();
void solve(){
int n;cin>>n;
int a=1,b=1,c=1;
while(true){
    if(n%3==0){
        cout<<n/3<<" "<<0<<" "<<0<<endl;
        break;
    }
    else if(n%5==0){
        cout<<0<<" "<<n/5<<" "<<0<<endl;
        break;
    }
    else if(n%7==0){
        cout<<0<<" "<<0<<" "<<n/7<<endl;
        break;
    }
    else{
        if(n/7>(a*3)+(b*5)){
            c++;
        }
        else if((n/5)%(a*3)){
            b++;
        }
    }
}

}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
for(int i=0;i<t;i++){
solve();
}
}