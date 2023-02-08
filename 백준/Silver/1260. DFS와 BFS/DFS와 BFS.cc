#include <bits/stdc++.h>
#define vi vector<int>

using namespace std;

void dfs(vector<vi> graph, int start, vector<bool> check);
void bfs(vector<vi> graph, int start, vector<bool> check);

int main()
{
    int N, M, start, u, v;

    cin >> N >> M >> start;

    vector<vi> graph(N + 1);
    vector<bool> visit(N + 1);
   

    for (int i = 0; i < M; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= N; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(graph, start, visit);

    bfs(graph, start, visit);
}

void dfs(vector<vi> graph, int start, vector<bool> check)
{
    // cout << "dfs2";

    stack<int> s;
    s.push(start);
    check[start] = true;

    cout << start << " ";

    while (!s.empty())
    {

        int current_node = s.top();
        s.pop();
        for (int i = 0; i < graph[current_node].size(); i++)
        {

            int next_node = graph[current_node][i];

            if (check[next_node] == false)
            {
                cout << next_node << " ";
                check[next_node] = true;
                // pop()을 했었기 때문에 현재 current_node도 넣어줘야한다.
                s.push(current_node);
                s.push(next_node);
                break;
            }
        }
    }

    cout << "\n";
}

void bfs(vector<vi> graph, int start, vector<bool> check)
{
    // cout << "bfs1";

    queue<int> q;

    q.push(start);
    check[start] = true;

    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        cout << now << " ";

        for (int i = 0; i < graph[now].size(); i++)
        {
            int temp = graph[now][i];
            // 방문하지 않았다면
            if (check[temp] == false)
            {

                // 큐에 넣어주고 방문했음을 표시한다.
                q.push(temp);
                check[temp] = true;
            }
        }
    }
}