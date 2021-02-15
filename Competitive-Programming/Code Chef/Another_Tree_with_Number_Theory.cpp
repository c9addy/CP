#include<bits/stdc++.h>
#include <unordered_map>
#include <iostream>
using namespace std ;
typedef long long  ll;
typedef vector<int> vi;
typedef vector<ll> vil;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define SORT(v) sort(v.begin(), v.end())
#define RSORT(v) sort(v.rbegin(),v.rend())
#define PRINT(x) cout<<x<<"\n";
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



// const int mxn = 1e6;
// vector<int> primenum;
// void primes()
// {
//     bool prime[mxn];
//     memset(prime, false, sizeof(prime));
//     for (int i = 3; i < sqrt(mxn) + 1; i += 2)
//         if (not prime[i])
//             for (int j = i * i; j < mxn; j += i)
//                 prime[j] = true;
//     primenum.push_back(2);
//     for (int i = 3; i < mxn; i += 2)
//         if (not prime[i])
//             primenum.push_back(i);
// }
//string ans = (sum ==m  ? "YES" : "NO");//reference

inline int check(unordered_map<int, vector<int> > dict, int v,int w){
    if(dict[v].size()==0){
        return 0;
    }
    if(w%dict[v].size()==0){
        int temp2=0;
        int new_w=w/dict[v].size();
        FOR(i,0,dict[v].size()){
            temp2+=check(dict,dict[v][i],new_w);
        }
        return temp2;
    }
    else{
        return w;
    }
}
inline void solve() {
int n;
unordered_map<int, vector<int> > dict;
cin>>n;
FOR(i,0,n){
    vector<int> temp;
    dict.insert(make_pair(i+1,temp));
}
FOR(i,2,n+1){
    int t;cin>>t;
    dict[t].push_back(i);
}
int q,v,w;cin>>q;

FOR(i,0,q) {
    cin>>v>>w;
    int ans=check(dict,v,w);
    PRINT(ans);
}
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
solve();
}

