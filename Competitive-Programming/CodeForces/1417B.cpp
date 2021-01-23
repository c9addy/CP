#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
for(int i=0;i<t;i++){
    int n,T;
    cin>>n>>T;
    int array_num=0;
    for(int j=0;j<n;j++){
        int b;cin>>b;
        if(b==T/2 && T%2==0){
            if(array_num==0){
                cout<<array_num<<" ";
                array_num=1;
            }
            else{
                cout<<array_num<<" ";
                array_num=0;
            }
        }
        else if(b<(float)T/2){
            cout<<0<<" ";
        }
        else if(b>(float)T/2){
            cout<<1<<" ";
        }
    }
    cout<<endl;
}
}