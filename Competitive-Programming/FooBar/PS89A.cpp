#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std ;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif

int n,k;cin>>n>>k;
vector<int> vec;
vector<int> temp(n);
for(int i=0;i<n;i++){
cin>>temp[i];
}
sort(temp.begin(), temp.end());
for(int i=0;i+k-1<n;i++){
    // cout<<"i:"<<i<<endl;
    vector<int> temp2;
    for(int j=i+1;j<i+k;j++){
        
            temp2.push_back(abs(temp[i]-temp[j]));
        
    }
    
    sort(temp2.begin(), temp2.end());
    // for(int i1=0;i1<temp2.size();i1++){
    //     cout<<temp2[i1]<<" ";
    // }
    // cout<<"END"<<endl;
    // vec.push_back(*max_element(temp2.begin(), temp2.end()));
    vec.push_back(temp2[temp2.size()-1]);
}
cout<<*min_element(vec.begin(), vec.end())<<endl;
}