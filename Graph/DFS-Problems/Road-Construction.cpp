// ==================== Problem Link: https://codeforces.com/contest/330/problem/B ====================

#include <iostream>
#include <set>
#include <utility>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define fast_3n_3n                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define endl "\n"
#define precision(a) cout << fixed << setprecision(a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define Zeoo return 0;

vector<vector<int>> adj;
vector<int> vis;
vector<int> ans;
bool cycle = false;

void solve()
{
    int n, m;
    cin >> n >> m;

    map<int, bool> mp;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        mp[u] = 1;
        mp[v] = 1;
    }

    int center = 0;

    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == 0)
        {
            center = i;
            break;
        }
    }

    cout << n - 1 << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i == center)
            continue;
        cout << center << " " << i << endl;
    }
}

int main()
{
    fast_3n_3n

        int t = 1;

    // cin>>t;
    while (t--)
    {
        solve();
    }

    Zeoo
}