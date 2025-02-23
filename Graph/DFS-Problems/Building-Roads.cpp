// ============================= problem link: https://cses.fi/problemset/task/1666 =============================
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
const int N = 1e3 + 10;

vector<vector<int>> adj;
vector<bool> vis;

void DFS(int node)
{
    vis[node] = 1;

    for (auto child : adj[node])
    {
        if (!vis[child])
        {
            DFS(child);
        }
    }
}

void solve()
{
    int nodes, edges;
    cin >> nodes >> edges;

    adj.assign(nodes + 1, {});
    vis.assign(nodes + 1, 0);

    vector<int> component_leaders;

    for (int i = 0; i < edges; ++i)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= nodes; ++i)
    {
        if (!vis[i])
        {
            component_leaders.push_back(i);
            DFS(i);
        }
    }

    cout << component_leaders.size() - 1 << endl;

    for (int i = 0; i < component_leaders.size() - 1; ++i)
    {
        cout << component_leaders[i] << " " << component_leaders[i + 1] << endl;
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
