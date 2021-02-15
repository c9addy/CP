#include <bits/stdc++.h>
using namespace std;
const int mxn = 1e6;
vector<int> primenum;
void primes()
{
    bool prime[mxn];
    memset(prime, false, sizeof(prime));
    for (int i = 3; i < sqrt(mxn) + 1; i += 2)
        if (not prime[i])
            for (int j = i * i; j < mxn; j += i)
                prime[j] = true;
    primenum.push_back(2);
    for (int i = 3; i < mxn; i += 2)
        if (not prime[i])
            primenum.push_back(i);
}
void solve()
{
    int x, y, p;
    cin >> x >> y;
    auto it = upper_bound(primenum.begin(), primenum.end(), x);
    if (it == primenum.begin())
        p = 0;
    else
        p = (--it - primenum.begin());
    cout << (p < y ? "Chef" : "Divyam") << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    primes();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}