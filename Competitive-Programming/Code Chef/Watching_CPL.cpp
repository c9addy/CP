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
#define FOR(i,a,b) for (int i = a; i < b; i++)
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




int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

ll t;cin>>t;

while(t--){
int n,k;
ll sum=0;
cin>>n>>k;
k*=2;
vi h(k);
for(ll i=0;i<n;i++){
    cin>>h[i];
    sum+=h[i];
}
if(sum<k){
    cout<<-1<<endl;
}
else if(sum==k){
    cout<<n<<endl;
}
else{
sort(h.rbegin(),h.rend());//reverse
ll countt=0;

for(ll i=0;i<n;i++){
    if(k<=0){

        break;
    }
    k-=h[i];
    countt++;
}
cout<<countt<<endl;
}

}
}

// /* package codechef; // don't place package name! */

// import java.util.*;
// import java.lang.*;
// import java.io.*;

// /* Name of the class has to be "Main" only if the class is public. */
// class Codechef
// {
// public static void main (String[] args) throws java.lang.Exception
// {
// Scanner scan=new Scanner(System.in);
// int t=scan.nextInt();
// while(t-- !=0){
// int n=scan.nextInt();
// int k=scan.nextInt();
// int h[]=new int[n];
// LinkedHashSet<Integer> h1=new LinkedHashSet<Integer>();

// int sum=0;
// for(int i=0;i<n;i++){
// h[i]=scan.nextInt();
// }
// Arrays.sort(h);
// h1.add(h[n-1]);
// sum=h[n-1];
// int z=-1;
// for(int i=n-2;i>=0;i--){
// LinkedHashSet<Integer> h2=new LinkedHashSet<Integer>();
// sum=sum+h[i];
// Iterator i1=h1.iterator();
// while(i1.hasNext()){
// int p=(int)(i1.next());
// h2.add(p);
// h2.add(h[i]);
// h2.add(p+h[i]);
// if(((p+h[i])>=k)&&((sum-p-h[i])>=k)){
// z=n-i;
// break;
// }
// if(((h[i])>=k)&&((sum-h[i])>=k)){
// z=n-i;
// break;
// }
// }
// if(z!=-1){
// break;
// }
// h1=h2;
// }
// System.out.println(z);
// }
// }
// }