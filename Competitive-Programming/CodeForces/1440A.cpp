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
int n,c0,c1,h;cin>>n>>c0>>c1>>h;
string s;cin>>s;

int ones=0,zeros=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
        zeros++;
    }
    if(s[i]=='1'){
        ones++;
    }
}
    int a1=(zeros*c0)+(ones*c1);
    int a2=(c0*n)+(ones*h);
    int a3=(zeros*h)+(c1*n);
    int a4=min(a1,a2);
    cout<<min(a3,a4)<<endl;


}
}
