#include <bits/stdc++.h>
using namespace std;
int n,m1,m2,m3;
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin>>n;
    int cou=0;
    for(int i=0;i<n;i++){
        cin>>m1>>m2>>m3;
        if(m1+m2+m3>=2){
            cou++;
        }
    }
    cout<<cou<<endl;
    }