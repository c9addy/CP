#include <bits/stdc++.h>
using namespace std;
string str;
int m;
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>str;
        if(str.length()>10){
            cout<<str.substr(0,1)<<str.length()-2<<str.substr(str.length()-1,str.length())<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }
    
    
}