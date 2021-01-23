#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
bool existornot(vector<int> vec, int m);
bool existornot(vector<int> vec, int m){
    vector<vector<bool> > ddvec;
    vector<bool> dvec;
    dvec.push_back(true);
    for(int i=1;i<m;i++){
        dvec.push_back(false);
    }
    for(int i=0;i<vec.size();i++){
        ddvec.push_back(dvec);
    }
//     for (int i = 0; i < vec.size(); i++)
// {
//     for (int j = 0; j < m; j++)
//     {
//         cout << ddvec[i][j]<<" ";
//     }
//     cout << endl;
// }
    for(int i=1;i<vec.size();i++){
        ddvec[i][vec[i]]=true;
        int v=vec[i];
        for(int j=1;j<m;j++){
            if (j < vec[i - 1]) 
                ddvec[i][j] = ddvec[i - 1][j]; 
            if (j >= vec[i - 1]) 
                ddvec[i][j] = ddvec[i - 1][j] 
                               || ddvec[i - 1][j - vec[i - 1]]; 
            
        }
    }
for (int i = 0; i < vec.size(); i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << ddvec[i][j]<<" ";
    }
    cout << endl;
}
return ddvec[vec.size()-1][m-1];
return true;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,m;cin>>n>>m;// 6 9
vector<int> vec;
for(int i=0;i<n;i++){
    int t;cin>>t;// 3, 34, 4, 12, 5, 2
    if(t<=m){
        vec.push_back(t);
    }
    
}
cout<<existornot(vec,m)<<endl;


}