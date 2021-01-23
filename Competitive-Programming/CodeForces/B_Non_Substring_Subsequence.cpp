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
int n, q;
string s;
cin>>n>>q>>s;
while(q--){
    bool iscont=true;
    int l,r;cin>>l>>r;
    l-=1;r-=1;
    if(r-l+1==n){
        cout<<"NO"<<endl;
        continue;
    }
    else{
    for(int i=0;i<l;i++){
        if(s[i]==s[l]){
            // cout<<"Pre: "<<i<<endl;
            cout<<"YES"<<endl;
            iscont=false;
            break;
        }
    }
    if(iscont){
        for(int i=r+1;i<n;i++){
        if(s[r]==s[i]){
            // cout<<"Post: "<<i<<endl;
            cout<<"YES"<<endl;
            iscont=false;
            break;
        }
    }
    }
    }
    if(iscont){
        cout<<"NO"<<endl;
    }

}
}
}

