#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
bool ispowerofTwo(int n){
return (n && !(n&(n-1)));
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
long int t;cin>>t;
for(long int i=0;i<t;i++){
long int n;cin>>n;
bool check=ispowerofTwo(n)? true: false;
if(check and n!=1){
    cout<<-1<<endl;
}
else if(n==1){
    cout<<1<<endl;
}
else{
 
        for(long int j=1;j<=n;j++){
            if(j==1 and n>2){
                cout<<2<<" "<<3<<" "<<1<<" ";
                j+=1;
            }
            if(j>3){
            bool check1=ispowerofTwo(j)? true: false;
            if(check1){
            cout<<j+1<<" ";
            cout<<j<<" ";
            j++;
            }
            else{
                cout<<j<<" ";
            }
            }
            
        }
        cout<<endl;
    }
}
}