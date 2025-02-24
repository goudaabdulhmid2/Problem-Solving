// ==================== Problem Link: https://codeforces.com/problemset/problem/893/C ====================
#include <iostream>
#include <set>
#include <utility>
#include <vector>
#include <map>
#include <algorithm>
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

vector<vector<ll>> adj;
vector<bool> vis;
map<ll, ll> golds;
ll minCost;

// Graph Traversal
void DFS(int node)
{
    vis[node] = true;
    minCost = min(minCost, golds[node]);
    for (auto child : adj[node])
    {
        if (!vis[child])
            DFS(child);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    adj.assign(n + 1, {});
    vis.assign(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> golds[i];
    }

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll cost = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            minCost = golds[i];
            DFS(i);
            cost += minCost;
        }
    }

    cout << cost << endl;
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