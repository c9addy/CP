#include<bits/stdc++.h>
#include <iostream>
#include <complex>
#include <vector>
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
#define FORL(i,a,b) for (int i = a; i < b; i++)
#define SORT(v) sort(v.begin(), v.end())
#define RSORT(v) sort(v.rbegin(),v.rend())
#define PRINT(x) cout<<x<<"\n";
ll MOD=998244353;
vil v(32);
vil vl(32);
void convert(ll num) {
   for (ll i = 31; i >= 0; i--) {
      ll k = num >> i;
      if (k & 1){
        v[i]++;
        }
    }
}
ll fact(ll n); 
ll nCr(ll n, ll r) 
{ 
    return (fact(n) / (fact(r) * fact(n - r))); 
}
ll fact(ll n) 
{ 
    ll res = 1; 
    for (ll i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
}
ll solution(ll l,ll n){
    ll ans=0;
    FORL(i,0,n){
        ll c=1;
        ll a=0;
        while(c<=l){
            if(v[i]>0){
                ll ttt=(((nCr(v[i],c)))*((nCr(n-v[i],l-c))));
                if(ttt>MOD){
                    ttt=ttt%MOD;
                }
                ll powe=pow(2,i);
                powe=powe;
                if(powe>MOD){
                    powe=powe%MOD;
                }
                a=((a+(ttt*powe)));
                if(a>MOD){
                    a=a%MOD;
                }
                }
            c+=2;
        }
        ans=(ans+a);
    }
    if(ans>MOD){
        ans=ans%MOD;
    }
    return ans;
}
inline void solve() {
ll n;cin>>n;
ll sum=0;
FORL(i,0,n){
    ll t;cin>>t;
    convert(t);
}
ll q;cin>>q;
FORL(i,0,q){
    ll l;cin>>l;
    ll ans=0;
    FORL(j,1,l+1){
        if(vl[j]==0){
            ans+=solution(j,n);
            vl[j]=ans;
        }
        else{
            ans+=vl[j];
        }
    }
    if(ans>MOD){
        ans=ans%MOD;
    }
    PRINT(ans);   
}
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
solve();
}

