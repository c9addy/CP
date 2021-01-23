#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <unordered_map>
#include <bitset>

using namespace std;

typedef long long ll;
const int maxn = 2e5 + 7;
const int mod = 998244353;

int a[maxn],b[maxn];
int main() {
    int n;scanf("%d",&n);
    for(int i = 1;i <= n;i++) {
        scanf("%d",&a[i]);
    }
    sort(a + 1,a + 1 + n);
    int cnt = 0;
    for(int i = 1;i <= n / 2;i++) {
        b[++cnt] = a[i + n / 2];
        b[++cnt] = a[i];
    }
    if(n & 1) b[++cnt] = a[n];
    int ans = 0;
    for(int i = 2;i < n;i ++) {
        if(b[i] < b[i - 1] && b[i] < b[i + 1]) {
            ans++;
        }
    }
    printf("%d\n",ans);
    for(int i = 1;i <= n;i++) printf("%d ",b[i]);
    return 0;
}