#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
typedef long long  ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for (int i = a; i <= b; i++)
#define SORT(v) sort(v.begin(), v.end())
#define RSORT(v) sort(v.rbegin(),v.rend())
// #define ar array;
// ======================================REFERENCE======================================

// --------------------------------------COMPILATION--------------------------------------
// g++-10 -std=c++11 -O2 -Wall test.cpp -o test

// --------------------------------------INPUT--------------------------------------
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
// getline(cin, s);//whole line from the input

// --------------------------------------GENERAL--------------------------------------
// printf("%.20f\n", x); // 0.99999999999999988898

// --------------------------------------TIME COMPLEXITY-------------------------------------- 
// input size       required time complexity
// n≤10             O(n!) 
// n≤20             O(2^n) 
// n≤500            O(n^3)
// n≤5000           O(n^2)
// n≤10^6           O(n log n) or O(log n)
// n is large       O(1) or O(log n)

// --------------------------------------DATA STRUCTURE--------------------------------------
// map<string,int> m;
// stack<int> s;
// queue<int> q;
// priority_queue<int> q;
// --------------------------------------SORTING--------------------------------------
// Vector
// sort(v.begin(), v.end());
// sort(v.rbegin(),v.rend());//reverse

// Array
// sort(a,a+n);

// --------------------------------------FUNCTION--------------------------------------
// auto a = lower_bound(array, array+n, x);
// auto b = upper_bound(array, array+n, x);




// Prime Numbers Vector
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




int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

ll n,a,b;cin>>n>>a>>b;
ll sum=0;
for(int i=1;i<=n;i++){
    int ans=0;
    int temp=i;
    if(temp>9){
    while(temp>0){
    ans+=temp%10;
    temp/=10;
    }
    // cout<<ans<<endl;
    if(ans<=b and ans>=a){
        // cout<<i<<endl;
        sum+=i;
    }
    }
    
    else if(temp<=9 and temp<=b and temp>=a){
        sum+=i;
    }
    // cout<<sum<<endl;
    
}
cout<<sum<<endl;
}

