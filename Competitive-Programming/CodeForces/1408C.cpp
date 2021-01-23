#include<bits/stdc++.h>
#include <iostream>
#include <cmath> 
using namespace std ;
bool check(vector<bool>& v,double s,double e);
bool check(vector<bool>& v,double s,double e){
for(int i=0;i<v.size();i++){
    if(i>s and i<e){
        if(v[i]==true){
            return true;
        }
    }
}
return false;
}
void solve();
void solve(){
int n;
double l,s=0,e;
cin>>n>>l;
e=l;
double td=l;
double ttime=0;
vector<int>a(l);
vector<bool> v(n);
for(int i=0;i<l;i++){
    v[i]=false;
}
for(int i=0;i<n;i++){
    
    cin>>a[i];
    v[a[i]]=true;
}
int es=1,ss=1;
while(s<=e){
double stt=1,ett=1;
if(check(v,s,e)==false){
    cout<<ttime+((e-s)/(ss+es))<<endl;
    break;
}
while(stt>0){
    double temploc=s;
    double st;
    if(s==ceil(s)){
    st=(s+1-s)/ss;        
    }
    else{
    st=(ceil(s)-s)/ss;
    s=ceil(s);
    }
    if(stt-st>=0){
    s++;
    if(v[s]==true){
        ss++;
    }
    stt-=st;
    if(temploc==ceil(temploc)){
        --td;
    }
    else{
        td-=(1-temploc);
    }
    
}
    else{
        temploc=ss*stt;
        td-=temploc;
        s+=temploc;
        break;
        
}
}

while(ett>0){
    double temploc=e;
    double et;
    if(e==floor(e)){
    et=(e+1-e)/es;        
    }
    else{
    et=(floor(e)-e)/es;
    e=floor(e);
    }
    if(ett-et>=0){
    --e;
    if(v[e]==true){
        es++;
    }
    ett-=et;
    if(temploc-=floor(temploc)){
        --td;
    }
    else{
        td-=(1-temploc);
    }
    
}
    else{
        temploc=es*ett;
        td-=temploc;
        e-=temploc;
        break;
}
}

ttime+=1;
// cout<<"td:"<<td<<endl;
// cout<<"s:"<<s<<" "<<"e:"<<e<<endl;
// cout<<"ss:"<<ss<<" "<<"es:"<<es<<endl;
// cout<<"ttime:"<<ttime<<endl;
}


}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
for(int i=0;i<t;i++){
solve();
}
}

// #include <bits/stdc++.h>
 
// using namespace std;
 
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   int tt;
//   cin >> tt;
//   while (tt--) {
//     int n, l;
//     cin >> n >> l;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//       cin >> a[i];
//     }
//     double low = 0;
//     double high = l;
//     for (int it = 0; it < 100; it++) {
//       double mid = 0.5 * (low + high);
//       double total = 0;
//       {
//         double t = mid;
//         double x = 0;
//         double v = 1;
//         for (int i = 0; i < n; i++) {
//           double until = (a[i] - x) / v;
//           if (until <= t) {
//             t -= until;
//             x = a[i];
//             v += 1;
//             continue;
//           }
//           break;
//         }
//         x += v * t;
//         total += x;
//       }
//       {
//         double t = mid;
//         double x = l;
//         double v = 1;
//         for (int i = n - 1; i >= 0; i--) {
//           double until = (x - a[i]) / v;
//           if (until <= t) {
//             t -= until;
//             x = a[i];
//             v += 1;
//             continue;
//           }
//           break;
//         }
//         x -= v * t;
//         total += l - x;
//       }
//       if (total >= l) {
//         high = mid;
//       } else {
//         low = mid;
//       }
//     }
//     cout << fixed << setprecision(17) << 0.5 * (low + high) << '\n';
//   }
//   return 0;
// }