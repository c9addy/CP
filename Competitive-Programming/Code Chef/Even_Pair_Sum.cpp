#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
#define ll long long ;
#define ar array;

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
long long A,B,Ae=0,Ao=0,Be=0,Bo=0;
cin>>A>>B;
if(A%2==0){
    Ae=A/2;
    Ao=A/2;
}
if(B%2==0){
    Be=B/2;
    Bo=B/2;
}
if(A%2!=0){
    Ae=A/2;
    Ao=A/2;
    Ao++;
}
if(B%2!=0){
    Be=B/2;
    Bo=B/2;
    Bo++;
}
cout<<(Ae*Be)+(Ao*Bo)<<endl;
}
}

