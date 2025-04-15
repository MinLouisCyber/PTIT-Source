#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList;

void dfs(int u, vector<bool>& visited)
{
    visited[u] = true;
    for (int v : adjList[u])
    {
        if (!visited[v])
        {
            dfs(v, visited);
        }
    }
}

void dinhtru(ofstream& fout)
{
    int tplt = 0;
    int n = adjList.size();
    vector<int> ans;

    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            tplt++;
            dfs(i, visited);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int dem = 0;
        vector<bool> visited(n, false);
        visited[i] = true;

        for (int j = 0; j < n; j++)
        {
            if (!visited[j])
            {
                dem++;
                dfs(j, visited);
            }
        }

        if (dem > tplt)
        {
            ans.push_back(i + 1); 
        }
    }

    sort(ans.begin(), ans.end());
    fout << ans.size() << '\n';
    for (int x : ans) fout << x << " ";
    fout << '\n';
}

int main()
{
    ifstream fin("TK.INP");
    ofstream fout("TK.OUT");

    int n;
    fin >> n;

    adjList.resize(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int val;
            fin >> val;
            if (val == 1)
            {
                adjList[i].push_back(j);
            }
        }
    }

    dinhtru(fout);
}
