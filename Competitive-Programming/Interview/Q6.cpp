#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int check(vector<float>& vec,int cou);
int check(vector<float>& vec,int len){
int cou=0;
if(vec.size()<len){
    return 0;
}
for(int i=0;i+len<=vec.size();i++){
    float sum=0;
    if(i+len<=vec.size()){
        for(int j=i;j<i+len;j++){
            sum+=vec[j];
    }
    int s=count(vec.begin(), vec.end(), (sum/2));
    if(s>0){
    }
    else{
        vector<float> vec_temp=vec;
        vec.erase(vec.begin() + i+1, vec.begin() + len+i);
        vec[i]=(sum/2);
        cou+=check(vec,len)+1;
        vec=vec_temp;

    }
    }
    
}
return cou;
}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int a,b,c;
cin>>a>>b>>c;
vector<float> vec;
for(int i=0;i<a;i++){
    vec.push_back(0);
}
for(int i=0;i<b;i++){
    vec.push_back(1);
}
cout<<check(vec,c)<<endl;

}