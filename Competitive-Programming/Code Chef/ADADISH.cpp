#include<bits/stdc++.h>
#include <iostream>
using namespace std ;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
int t;cin>>t;
while(t--){
int n,ans=0;cin>>n;
vector<int> vec(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}
sort(vec.begin(), vec.end(), greater<int>()); 
int i=0;
int j=1;
while(i<n){
    // cout<<i<<" "<<j<<endl;
    
    if(vec[i]==vec[j]){
        ans+=vec[i];
        i+=2;
        j+=3;
    }
    else{
        if(vec[i]>vec[j]){
            if(i==n-1){
        ans+=vec[i];
        i++;
    }
            else{ans+=min(vec[i],vec[j]);
            vec[i]-=vec[j];
            j++;}
        }
        else{
            ans+=min(vec[i],vec[j]);
            vec[j]-=vec[i];
            i=j;
            j++;
        }
    }
    cout<<ans<<endl;
}
cout<<ans<<endl;
}
}

//string ans = (sum ==m  ? "YES" : "NO");//reference
