#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
long long int t;cin>>t;
vector<long int> a;
long long int n,k;
for(long long int i=0;i<t;i++){
cin>>n>>k;
a.resize(n);
long long int sum=0,ans=0;
long long int t_sum=0;
long long int m=LONG_LONG_MAX;
for(long long int j=0;j<n;j++){
    long long int t;
    cin>>t;
    sum+=t;
    t_sum+=t;
    sum-=k;
    a[j]=sum;
    if(a[j]<0 and m==LONG_LONG_MAX){
        m=j+1;
    }
}
double test=t_sum/k;
test=ceil(test)+1;
cout<<min((long long int)test,m)<<endl;
}
}