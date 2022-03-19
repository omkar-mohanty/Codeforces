#include <bits/stdc++.h>
#define debug(x) cout << #x << " " << x << endl;
using ull = unsigned long long;
using ll = long long;
using namespace std;
void solve()
{
    int n, m;
    string s;
    string ans = "";
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            a[i][j] = s[j] - '0';
        }
    }
    if (a[0][0] == 1)
    {
        cout << "-1\n";
        return;
    }

    cout << n * m - 1 << "\n";
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                if (j == 0)
                {
                    cout << i << " " << j + 1 << " " << i + 1 << " " << j + 1 << "\n";
                }
                else
                {
                    cout << i + 1 << " " << j + 1 << " " << i + 1 << " " << j << "\n";
                }
            }
        }
    }
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