// ==================== Problem Link:https://atcoder.jp/contests/abc166/tasks/abc166_c ====================

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
#define ll long long

vector<set<ll>> adj;
map<ll, ll> heights;

void solve()
{
    ll nodes, edges;
    cin >> nodes >> edges;

    adj.assign(nodes + 1, {});

    for (int i = 1; i <= nodes; ++i)
    {
        cin >> heights[i];
    }

    ll u, v;
    for (int i = 1; i <= edges; ++i)
    {
        cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
    }

    ll goodPoints = 0;
    for (int i = 1; i <= nodes; ++i)
    {
        bool isGoodPoint = 1;
        for (auto j : adj[i])
        {
            if (heights[i] <= heights[j])
                isGoodPoint = 0;
        }

        if (isGoodPoint)
            goodPoints++;
    }

    cout << goodPoints;
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