#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
typedef long long  ll;
// #define ar array;

//Prime Numbers Vector
// static int maxN=4000001;
// vector<int> primes;
// vector<bool> prime(maxN);
// void prime_numbers(){
//     // vector<int> primes;
//     for(int i=0;i<maxN;i++){
//         prime[i]=true;
//     }
//     for(int p=2;p*p<maxN;p++){
//         if(prime[p]){
//             for(int i=p*p;i<maxN;i+=p){
//                 prime[i]=false;
//             }
//         }
//     }
//     for(int i=2;i<maxN;i++){
//         if(prime[i]){
//             primes.push_back(i);
//         }
//     }
// }


//string ans = (sum ==m  ? "YES" : "NO");//reference

// sort(vec.begin(), vec.end());


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
ll t;cin>>t;
while(t--){
int x,y,k,n;
cin>>x>>y>>k>>n;
// cout<<x+(2*k)<<endl;
int a=min(x,y);
int b=max(x,y);
int i=0;
bool istrue=0;
while (a+(i*k)<=b){
    if(a+(i*k)==b){
    istrue=1;
    break;
}
i+=2;
}
if(istrue){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
}

