// ==================== Problem Link: https://vjudge.net/problem/UVA-10608/origin ====================
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
vector<int> tmp;
vector<bool> vis;

void DFS(int node)
{
    vis[node] = 1;

    for (auto child : adj[node])
    {
        if (!vis[child])
        {
            DFS(child);
            tmp.push_back(child);
        }
    }
}

void solve()
{
    int nodes, edgs;
    cin >> nodes >> edgs;

    adj.assign(nodes + 1, {});
    vis.assign(nodes + 1, 0);

    for (int i = 0; i < edgs; ++i)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int ans = 0;
    for (int i = 1; i <= nodes; ++i)
    {
        if (!vis[i])
        {
            tmp.push_back(i);
            DFS(i);
            ans = max(ans, (int)tmp.size());
            tmp.clear();
        }
    }

    cout << ans << endl;
}

int main()
{
    fast_3n_3n;

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    Zeoo
}