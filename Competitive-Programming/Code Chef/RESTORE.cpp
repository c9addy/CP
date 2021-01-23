#include <iostream>
using namespace std ;
static int maxN=4000001;
vector<int> primes;
vector<bool> prime(maxN);
void func(){
    // vector<int> primes;
    for(int i=0;i<maxN;i++){
        prime[i]=true;
    }
    for(int p=2;p*p<maxN;p++){
        if(prime[p]){
            for(int i=p*p;i<maxN;i+=p){
                prime[i]=false;
            }
        }
    }
    for(int i=2;i<maxN;i++){
        if(prime[i]){
            primes.push_back(i);
        }
    }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
func();
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif

int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int> b(n);
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>b[i];
    a[i]=primes[i];
    // cout<<primes[b[i]]<<" ";
    // cout<<a[i]<<" ";
}
// cout<<endl;
for(int i=0;i<n;i++){
    if(b[i]!=i+1){
        
        a[i]=a[b[i]-1];
    }
}
// cout<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}
}

//string ans = (sum ==m  ? "YES" : "NO");//reference