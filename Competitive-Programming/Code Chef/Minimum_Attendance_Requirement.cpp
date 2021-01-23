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
int n,count=0;string a;
cin>>n>>a;
for(int i=0;i<n;i++){
    if(a[i]=='0'){
        count++;
    }
}
// cout<<((120-count)/120.0)*100<<endl;
string ans = (((120-count)/120.0)*100>=75  ? "YES" : "NO");//reference
cout<<ans<<endl;
}
}

