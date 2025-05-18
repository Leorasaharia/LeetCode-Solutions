class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int INF = INT_MAX;
        vector<vector<int>> graph(n+1, vector<int>(n+1, INF));
        for (auto &edge : times) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            graph[u][v] = w;
        }
        vector<int> dist(n+1, INF);
        vector<bool> visited(n+1, false);
        dist[k] = 0;
        for (int i = 1; i <= n; i++) {
            int u = -1;
            int min = INF;
            for (int j = 1; j <= n; j++) {
                if (!visited[j] && dist[j] < min) {
                    min = dist[j];
                    u = j;
                }
            }
            if (u == -1){
                break;
            }
            visited[u] = true;
            for (int v = 1; v <= n; v++) {
                if (!visited[v] && graph[u][v] != INF) {
                    if (dist[u] != INF && dist[u] + graph[u][v] < dist[v]) {
                        dist[v] = dist[u] + graph[u][v];
                    }
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (dist[i] == INF){
                return -1;
            }
            ans = max(ans, dist[i]);
        }
        return ans;
    }
};
