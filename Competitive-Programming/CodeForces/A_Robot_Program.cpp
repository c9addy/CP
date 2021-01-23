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
int t;cin>>t;
while(t--){
    int x,y;cin>>x>>y;
    int ans=0;
    ans=(min(x,y))*2;
    if(x!=y){
        ans+=((max(x,y)-min(x,y))*2)-1;
    }
    
    cout<<ans<<endl;

}
}

