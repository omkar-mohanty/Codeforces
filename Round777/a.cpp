#include <bits/stdc++.h>
#define debug(x) cout << #x << " " << x << endl;
typedef unsigned long long ull;
typedef long long int ll;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sub = 0;
    if (n % 3 == 1)
    {
        sub = 1;
    }
    else
    {
        sub = 2;
    }
    while (n > 0)
    {
        cout << sub;
        n -= sub;
        sub = sub == 1 ? 2 : 1;
    }
    cout << "\n";
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