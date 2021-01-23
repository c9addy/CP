#include<bits/stdc++.h>
#include <iostream>
using namespace std ;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
while(t--){
    string s,temp;cin>>s;
    char ch;
    temp.push_back(s[0]);
    for (int i=1;i<s.size();i++){
        ch=s[i];
        if(temp.back()=='A' and ch=='B'){
            temp.pop_back();
        }
        else if(temp.back()=='B' and ch=='B'){
            temp.pop_back();
        }
        else{
            temp.push_back(ch);
        }
    }
    cout<<temp.size()<<endl;
}
}