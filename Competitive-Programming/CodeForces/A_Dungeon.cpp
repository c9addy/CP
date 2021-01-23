#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
typedef long long ll;
// typedef int ar[];

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
int t;
ll arr[3];
cin>>t;
while(t--){
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    int sum = arr[0] + arr[1] + arr[2];
    if (sum % 9 == 0) 
        {
            if (sum / 9 > arr[0]) 
            {
                cout << "NO" <<endl;
            }
            else cout << "YES" <<endl;
        }
        else cout << "NO\n";
}
}

