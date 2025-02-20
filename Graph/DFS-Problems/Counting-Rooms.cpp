// ==================== Problem Link: https://cses.fi/problemset/task/1192 ====================
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

int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
char grid[N][N];
bool vis[N][N];
int n, m;

void DFS(int i, int j)
{
    vis[i][j] = true;

    for (int d = 0; d < 4; d++)
    {
        int ni = i + di[d];
        int nj = j + dj[d];

        if (ni < n && ni >= 0 && nj < m && nj >= 0 && grid[ni][nj] == '.' && !vis[ni][nj])
        {
            DFS(ni, nj);
        }
    }
}

void solve()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int components = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                DFS(i, j);
                components++;
            }
        }
    }

    cout << components << endl;
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