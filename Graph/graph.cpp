#include <iostream>
#include <set>
#include <utility> // for pair
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
    cout << node << " " << endl;
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

    //  =============== Graph representation ===============

    // 1. Edge List
    /*
       vector<pair<int,int>> edge_list(m);
       for (int i = 0; i < m; ++i) {
       cin>>edge_list[i].first>>edge_list[i].second;
       }

       for (int i = 0; i < m; ++i) {
       cout<<edge_list[i].first<<" "<<edge_list[i].second<<endl;
       }

       set<pair<int,int>> edge_list;
       int u,v;
       for (int i = 0; i <m ; ++i) {
       cin>>u>>v;
       edge_list.insert({u,v});
       edge_list.insert({v,u});
       }
   */

    // 2. Adjacency matrix
    /*
    vector<vector<int>>matrix(n+1,vector<int>(n+1,0));
    for (int i = 0; i < m; i++)
    {
       int u ,v ; cin>>u>>v;
       matrix[u][v] = 1;
       matrix[v][u] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    // 3. Adjsent list
    /*
    vector<vector<int>> adj(n + 1);
     for (int i = 0; i < m; ++i)
     {
         int u, v;
         cin >> u >> v;
         adj[u].push_back(v);
         adj[v].push_back(u);
     }

     for (auto v : adj)
     {
         for (auto i : v)
         {
             cout << i << " ";
         }
         cout << endl;
     }
     */

    // ====================================================================

    // DFS Traversal
    adj.assign(n + 1, {});
    vis.assign(n + 1, 0);

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
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