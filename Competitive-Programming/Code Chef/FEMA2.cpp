#include<bits/stdc++.h>
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




int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
int t;cin>>t;
while(t--){
    int n,i,j=0,k,m=0;
    cin>>n>>k;
    vector<char> s(n);
    for(int i1=0;i1<n;i1++){
        cin>>s[i1];
    }

    int p=k+1,l,r,count=0;
    queue<int> mag;
    queue<int> iron;
    for(i=0;i<n;i++){
        if(s[i]=='M')
        mag.push(i);
        if(s[i]=='I')
        iron.push(i);
        if(s[i]=='X' || i==n-1){
            int l,r,sheet=0,q;
            while(!mag.empty()&&!iron.empty()){
                sheet=0;
                l=min(mag.front(),iron.front());
                r=max(mag.front(),iron.front());
                for(q=l;q<r;q++){
                    if(s[q]==':')
                        sheet++;
                }
                if((p-abs(l-r)-sheet)>0){
                    count++;
                    mag.pop();
                    iron.pop();
                }
                else if(mag.front()<iron.front()){
                    mag.pop();
                }
                else{
                    iron.pop();
                }
            }
            while(!mag.empty())
                mag.pop();
            while(!iron.empty())
                iron.pop();
        }
        
    }
cout<<count<<endl;

}
}
