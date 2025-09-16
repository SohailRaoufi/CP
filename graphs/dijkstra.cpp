#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e;
    cin >> n >> e;

    vector<vector<pair<int, int>>> graph(n);
    priority_queue<pair<int, int>,vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    for(int i = 0; i< e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({w, v});
        graph[v].push_back({w, u});
    }
    
    pq.push({0, 0});
    vector<int> dist(n, INT_MAX);
    dist[0] = 0;

    while(!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;

        for(auto [w, v]: graph[u]) {
            if(d+w < dist[v]) {
                dist[v] = d + w;
                pq.push({d+w, v});
            }
        }
    }
    for(int i = 0; i < n; i++) if(dist[i] == INT_MAX) dist[i] = -1;
    for(auto x: dist) cout << x << " ";
    return 0;
}