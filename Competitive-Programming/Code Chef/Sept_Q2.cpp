#include <bits/stdc++.h>
#include <vector>
using namespace std;
int n,t,m,cou=0;
int gcd(int a, int b);
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin>>t;
    for (int i=0;i<t;i++){
    vector<int> vec;
    vector<int> vec_b;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>m;
        vec.push_back(m);
        vec_b.push_back(j+1);
    }
    bool test= false;
    for(int i=0;i+1<vec_b.size();i++){
        for(int j=i+1;j<vec_b.size();j++){
            vector<int> temp1=vec_b;
            vector<int> temp2=vec_b;
            int temp=gcd(vec_b[i],vec_b[j]);
            temp1[i]=temp;
            temp2[j]=temp;
            if(temp1==vec||temp2==vec){
                test=true;
                break;
            }
        }
    }
    if(test){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }   
}