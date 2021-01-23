#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
long int N;
int D;cin>>N>>D;
vector<vector<int> > vec(N);
vector<int> temp(D);
for(long int i=0;i<N;i++){

vec.push_back(temp);
for(int j=0;j<D;j++){
int t;cin>>t;
vec[i].push_back(t);
}
}
long long int weight=0;
for(long int i=0;i+1<N;i++){
    for(int j=0;j<D;j++){
        weight+=abs(vec[i+1][j]-vec[i][j]);
    }
}
cout<<weight<<endl;
}