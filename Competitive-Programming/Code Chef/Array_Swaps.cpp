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
ll N,M;cin>>N>>M;
ll arrA[N];
ll arrB[M];
for(ll i=0;i<N;i++){
cin>>arrA[i];
}
for(ll i=0;i<M;i++){
cin>>arrB[i];
}
sort(arrA, arrA + N);
sort(arrB, arrB + M);
ll sum=0;
for(ll i=0;i<M;i++){
    if(arrB[i]<arrA[0]){
        sum+=N;
    }
}
cout<<sum<<endl;
}

