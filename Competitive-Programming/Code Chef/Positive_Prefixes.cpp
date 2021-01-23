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
int N,K,count=0;cin>>N>>K;
vector<int> v(N);
if(N%2==0){
    for(int i=1;i<=N;i++){
        if(i%2==0){
            count++;
            v[i-1]=i;
        }
        else{
            v[i-1]=-i;
        }
    }
}
else{
    for(int i=1;i<=N;i++){
        if(i%2!=0){
            count++;
            v[i-1]=i;
        }
        else{
            v[i-1]=-i;
        }
    
}}
if(K>count){
    for(int i=N-1;i>=0;i-=1){
        if(count==K){
            break;
        }
        if(v[i]<0){
            v[i]=-v[i];
            count++;
        }
    }
}
if(K<count){
    for(int i=N-1;i>=0;i-=1){
        if(count==K){
            break;
        }
        if(v[i]>0){
            v[i]=-v[i];
            count-=1;
        }
    }
}
for(int i=0;i<N;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}
}