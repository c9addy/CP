#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
bool prime(long long a)
{
	if (a==1) return 0;
	for (int i=2;i<=round(sqrt(a));++i)
	{
		if (a%i==0) return 0;
	}
	return 1;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
int t;cin>>t;
while(t--){
long long n;
cin>>n;
		for (int x=1;;++x) if (!prime(x) && prime(x*(n-1)+1))
		{
			for (int i=0;i<n;++i,cout<<endl) 
            for (int j=0;j<n;++j)
            if (i==j) {
                cout<<"1 ";
                }
			else {
                cout<<x<<' ';
            }
			break;
		}
}
}

//string ans = (sum ==m  ? "YES" : "NO");//reference