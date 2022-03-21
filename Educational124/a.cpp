#include <bits/stdc++.h>
#define debug(x) cout << #x << " " << x << endl;
using ll = long long;
using ull = unsigned long long;
using namespace std;
inline void solve()
{
    int n;
    cin >> n;
    cout << (1 << n) - 1 << "\n";
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}