#include <bits/stdc++.h>
#define flag 0
#define debug(x) cout << #x << " " << x << endl;
using ll = long long;
using ull = unsigned long long;
using namespace std;
void solve(int t)
{
    string i, p;
    string finalp = "", finali = "";
    map<char, int> mpi, mpp;
    int ans = 0;
    cin >> i >> p;
    for (auto s : i)
        mpi[s]++;
    for (auto s : p)
        mpp[s]++;
    for (auto s : mpp)
    {
        finalp += s.first;
    }
    for (auto s : mpi)
    {
        finali += s.first;
    }
    for (auto s : finali)
    {
        if (mpi[s] > mpp[s])
        {
            cout << "Case #" << t << ": "
                 << "IMPOSSIBLE"
                 << "\n";
            return;
        }
    }
    int k = 0, j;
    for (k = 0, j = 0; k < p.size();)
    {
        if (i[k] == p[k])
        {
            j++;
            k++;
        }
        else
        {
            ans++;
            k++;
        }
    }

    /*
        for (auto s : finalp)
        {

            if (mpi[s] < mpp[s])
            {
                ans += mpp[s] - mpi[s];
            }
        }*/
    cout << "Case #" << t << ": " << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve(i + 1);
    }
}