// ==================== Problem Link: https://www.spoj.com/problems/PT07Y/en/ ====================
#include <iostream>
#include <set>
#include <utility>
#include <vector>
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
vector<bool> vis;

// Graph Traversal
void DFS(int node)
{
    vis[node] = true;
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

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            DFS(i);
            cnt++;
        }
    }

    (cnt == 1 && m == n - 1 ? yes : no);
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