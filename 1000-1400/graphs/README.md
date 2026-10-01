# Graphs: BFS / DFS / grids

Status: not started

## What it is
Nodes and edges. BFS gives shortest paths when every edge has cost 1. DFS finds connected components and explores trees. A grid is a graph where each cell has 4 neighbors.

## Patterns and formulas
- **Adjacency list.** `vector<vector<int>> g(n+1); g[u].push_back(v); g[v].push_back(u);`
- **BFS.**
  ```
  queue<int> q; dist.assign(n+1, -1); dist[s] = 0; q.push(s);
  while (!q.empty()) { u = q.front(); q.pop(); for v in g[u] if dist[v] == -1 { dist[v] = dist[u]+1; q.push(v); } }
  ```
- **Multi-source BFS.** Push all sources with dist 0 at the start. Gives distance to the nearest source.
- **Components.** Loop all nodes, if unvisited run DFS/BFS and count++.
- **Grid.** `dx = {1,-1,0,0}, dy = {0,0,1,-1}`, check `0 <= nx < h && 0 <= ny < w` and the cell is open.
- **Cycle detection** in undirected graph: DFS hits a visited node that isn't the parent.
- **Bipartite check.** BFS coloring, conflict if a neighbor has the same color.

**Learn:** [USACO Guide: Graph Traversal](https://usaco.guide/silver/graph-traversal), [Flood Fill](https://usaco.guide/silver/flood-fill)

## Pitfalls
- Recursive DFS on 2e5 nodes in a line can stack overflow. Use iterative or BFS.
- Mark visited when pushing to the queue, not when popping, or nodes get pushed twice.
- Grid index as `id = x * w + y` if you want to reuse graph code.

## Plan
1. [ ] [2008D Sakurako's Hobby](https://codeforces.com/problemset/problem/2008/D) (1100, permutation cycles)
2. [ ] [1968D Permutation Game](https://codeforces.com/problemset/problem/1968/D) (1400, functional graph)
3. [ ] [2033E Sakurako, Kosuke, and the Permutation](https://codeforces.com/problemset/problem/2033/E) (1400, cycles)
4. [ ] [2034C Trapped in the Witch's Labyrinth](https://codeforces.com/problemset/problem/2034/C) (1500, grid DFS)
5. [ ] [1931F Chat Screenshots](https://codeforces.com/problemset/problem/1931/F) (1500, topological sort)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
