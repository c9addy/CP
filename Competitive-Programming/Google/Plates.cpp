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
int n, k, p, a[50][30];
int dp[51][1501];
void solve() {
    	cin >> n >> k >> p;
	// memset(dp, 0xc0, sizeof(dp));
	dp[0][0]=0;
	for(int i=0; i<n; ++i) {
		memcpy(dp[i+1], dp[i], sizeof(dp[0]));
		for(int j=0, s=0; j<k; ++j) {
			cin >> a[i][j];
			s+=a[i][j];
			//use j+1 plates
			for(int l=0; l+j+1<=p; ++l)
				dp[i+1][l+j+1]=max(dp[i][l]+s, dp[i+1][l+j+1]);
		}
	}
	cout << dp[n][p] << "\n";

}



int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, i=1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		++i;
	}
}

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array

// int n, k, p, a[50][30];
// int dp[51][1501];

// void solve() {
// 	cin >> n >> k >> p;
// 	memset(dp, 0xc0, sizeof(dp));
// 	dp[0][0]=0;
// 	for(int i=0; i<n; ++i) {
// 		memcpy(dp[i+1], dp[i], sizeof(dp[0]));
// 		for(int j=0, s=0; j<k; ++j) {
// 			cin >> a[i][j];
// 			s+=a[i][j];
// 			//use j+1 plates
// 			for(int l=0; l+j+1<=p; ++l)
// 				dp[i+1][l+j+1]=max(dp[i][l]+s, dp[i+1][l+j+1]);
// 		}
// 	}
// 	cout << dp[n][p] << "\n";
// }

// int main() {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t, i=1;
// 	cin >> t;
// 	while(t--) {
// 		cout << "Case #" << i << ": ";
// 		solve();
// 		++i;
// 	}
// }