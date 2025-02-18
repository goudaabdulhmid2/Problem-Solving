// ==================== Problem Link: https://codeforces.com/contest/292/problem/B ====================

#include <iostream>
#include <set>
#include <utility>
#include <vector>
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
vector<bool> vis;
vector<int> parent;
vector<bool> inPath;
int cycleNodes = 0;
bool cycle = false;

// Graph Traversal
void DFS(int node, int par)
{
    // Marking the node as visited and in the current path
    vis[node] = true;
    inPath[node] = true;
    parent[node] = par;

    for (auto child : adj[node])
    {
        // If the child is the parent, then skip it (back edge)
        if (child == par)
            continue;

        // If the child is already in the current path, then there is a cycle
        if (inPath[child])
        {
            cycle = true;

            int curr = node;

            // Counting the number of nodes in the cycle
            while (curr != child)
            {
                cycleNodes++;
                curr = parent[curr];
            }

            // Counting the child node as well
            cycleNodes++;
            return;
        }

        // If the child is not visited, then visit it
        if (!vis[child])
        {
            DFS(child, node);
            if (cycle)
                return;
        }
    }

    // Marking the node as not in the current path
    inPath[node] = false;
}

// The first solution came to my mind but it is not optimized and complex, the idea was to find the cycle and number of nodes in the cycle and then check the topology based on tree characteristics and the number of edges and cycle and number of nodes in the cycle.
void solve1()
{
    int nodes, edges;
    cin >> nodes >> edges;

    // Initializing the adjacency list, visited array, parent array and inPath array
    adj.assign(nodes + 1, {});
    vis.assign(nodes + 1, 0);
    parent.assign(nodes + 1, -1);
    inPath.assign(nodes + 1, 0);

    // Tracking the number of edges for each node
    map<int, int> track;

    for (int i = 0; i < edges; ++i)
    {
        int u, v;
        cin >> u >> v;
        track[u]++;
        track[v]++;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Starting the DFS from node 1
    DFS(1, 1);

    // Checking if the graph is a ring topology
    if (cycle && cycleNodes == edges)
        cout << "ring topology";
    else if (!cycle && edges == nodes - 1)
    {
        // Checking if the graph is a star topology
        bool flag = 0;
        int ans = 0;
        for (int i = 1; i <= nodes; ++i)
        {
            // Checking if the node has the maximum number of edges
            if (track[i] == edges)
            {
                flag = 1;
                break;
            }

            // Checking if the node has only one edge
            if (adj[i].size() == 1)
                ans++;
        }

        if (flag)
            cout << "star topology";
        else if (ans == 2)
            cout << "bus topology";
        else
            cout << "unknown topology";
    }
    else
        cout << "unknown topology";
}

// The second solution is optimized and simple, the idea is to count the number of nodes with one edge, two edges and n-1 edges and then check the topology based on the count of edges.
void solve2()
{
    int nodes, edges;
    cin >> nodes >> edges;

    adj.assign(nodes + 1, {});
    vis.assign(nodes + 1, 0);

    for (int i = 0; i < edges; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 1; i <= nodes; ++i)
    {

        // Counting the number of nodes with one edge
        if (adj[i].size() == 1)
            cnt1++;

        // Counting the number of nodes with two edges
        if (adj[i].size() == 2)
            cnt2++;

        // Counting the number of nodes with n-1 edges
        if (adj[i].size() == nodes - 1)
            cnt3++;
    }

    if (cnt1 == 2 && cnt2 == nodes - 2 && cnt3 == 0)
        cout << "bus topology";
    else if (cnt1 == 0 && cnt2 == edges && cnt3 == 0)
        cout << "ring topology";
    else if (cnt1 == nodes - 1 && cnt2 == 0 && cnt3 == 1)
        cout << "star topology";
    else
        cout << "unknown topology";
}

int main()
{
    fast_3n_3n

        int t = 1;

    // cin>>t;
    while (t--)
    {
        solve2();
    }

    Zeoo
}