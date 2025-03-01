// ================ Problem Link: https://codeforces.com/problemset/problem/1675/D ================
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
vector<vector<int>> paths;
vector<int> cur;

// Graph Traversal
void DFS(int node, int par)
{
    cur.push_back(node);
    for (auto child : adj[node])
    {
        if (child != par)
        {
            DFS(child, node);
        }
    }
    if (!cur.empty())
        paths.push_back(cur);
    cur.clear();
}

void solve()
{
    int n;
    cin >> n;
    adj.assign(n + 1, {});

    int root = 0;
    for (int i = 1; i <= n; i++)
    {
        int u;
        cin >> u;
        if (u == i)
            root = i;
        else
            adj[u].push_back(i);
    }

    DFS(root, root);

    cout << paths.size() << endl;

    for (auto v : paths)
    {
        cout << v.size() << endl;
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    paths.clear();
}

int main()
{
    fast_3n_3n

        int t = 1;

    cin >> t;
    while (t--)
    {
        solve();
    }

    Zeoo
}