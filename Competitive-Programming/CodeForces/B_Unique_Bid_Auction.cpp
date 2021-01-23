#include<bits/stdc++.h>
#include <iostream>
using namespace std ;

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
int n;cin>>n;
vector<bool> vec(n);
vector<bool> vec2(n);
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    if(vec[v[i-1]]==true){
        vec2[v[i-1]]=true;
    }
    else{
        vec[v[i-1]]=true;
    }
    

}
int ans=INT32_MAX;
int indx=-1;
for(int i=0;i<n;i++){
    if(vec2[v[i-1]]==false){
        ans=min(v[i-1],ans);
        indx=(ans == INT32_MAX  ? -1 : i-1);
    }
}
cout<<indx<<endl;

}
}

