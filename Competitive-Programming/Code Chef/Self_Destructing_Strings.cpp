#include<bits/stdc++.h>
#include <iostream>
#include <string.h>
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
char a[1000001];
while(t--){
cin>>a;
ll n=strlen(a);
// cout<<n<<endl;
if(n%2!=0){
    cout<<-1<<endl;
}
else{
    ll count_0=0;
    ll count_1=0;
    for(ll i=0;i<n;i++){
        if(a[i]=='0'){
            count_0++;
        }
        else if(a[i]=='1'){
            count_1++;
        }
    }
        if(count_1==n or count_1==0) cout<<"-1"<<endl;
        else{
            cout<<(abs(count_0-count_1))/2<<endl;
        }
        
    
}
}
}

