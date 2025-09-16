import heapq

n, e = map(int, input().split())
graph = [[] for _ in range(n)]

for _ in range(e):
    u,v,w = map(int, input().split())
    graph[u].append((w, v))
    graph[v].append((w, u))

pq = [(0, 0)]

dist = [float("inf")] * n
dist[0] = 0

while pq:
    w1, u1 = heapq.heappop(pq)
    if w1 > dist[u1]:
        continue

    for w2,v1 in graph[u1]:
        if w1 + w2 < dist[v1]:
            dist[v1] = w1 + w2
            heapq.heappush(pq, (w2 + w1, v1))

dist = [x if x != float("inf") else -1 for x in dist]
print(*dist)
