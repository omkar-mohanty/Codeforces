#include <bits/stdc++.h>
#define debug(x) cout << #x << " " << x << endl;
typedef unsigned long long ull;
typedef long long int ll;
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = s[j] - '0';
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            int s = mat[i][j] + mat[i + 1][j] + mat[i][j + 1] + mat[i + 1][j + 1];
            if (s == 3)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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