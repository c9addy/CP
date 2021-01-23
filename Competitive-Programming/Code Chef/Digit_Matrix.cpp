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
int n;cin>>n;
int v[n+1][n+1];
int arr[n+1][n+1];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>v[i][j];
    }
}
int arr1[] = { 1,2,3,4,5,6,7,8,9}; 
int n1 = sizeof(arr) / sizeof(arr[0]); 
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==0 and j==0){
            if(v[i][j]%4==0){
                arr[i][j]=v[i][j]/4;
                arr[i+1][j]=v[i][j]/4;
                arr[i][j+1]=v[i][j]/4;
                arr[i+1][j+1]=v[i][j]/4;
            }
            else if(v[i][j]%3==0){
                arr[i][j]=0;
                arr[i+1][j]=v[i][j]/3;
                arr[i][j+1]=v[i][j]/3;
                arr[i+1][j+1]=v[i][j]/3;
            }
        }
    }
}

}

