#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
typedef long long ll;
typedef vector<int> vec;

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
int t;cin>>t;
while(t--){
ll N,D,ar=0,nar=0;cin>>N>>D;
for(ll i=0;i<N;i++){
    ll temp;
    cin>>temp;
    if(temp>=80 || temp<=9){
        ar++;
    }
    else{
        nar++;
    }
}
ll ans_ar=(ar%D ==0  ?  (ar/D): (ar/D)+1);
ll ans_nar=(nar%D ==0  ?  (nar/D): (nar/D)+1);
ll ans= ans_ar+ans_nar;
cout<<ans<<endl;
}
}

