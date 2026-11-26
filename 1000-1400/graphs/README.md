# Graphs: BFS / DFS / grids

Status: in progress (2 solved)

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
1. [x] [2008D Sakurako's Hobby](https://codeforces.com/problemset/problem/2008/D) (1100, permutation cycles) — solved 2026-10-12 with DSU, filed in [dsu](../dsu/)
2. [ ] [1968D Permutation Game](https://codeforces.com/problemset/problem/1968/D) (1400, functional graph)
3. [x] [2033E Sakurako, Kosuke, and the Permutation](https://codeforces.com/problemset/problem/2033/E) (1400, cycles) — sum of (L - 1) / 2 over cycles
4. [ ] [2034C Trapped in the Witch's Labyrinth](https://codeforces.com/problemset/problem/2034/C) (1500, grid DFS)
5. [ ] [1931F Chat Screenshots](https://codeforces.com/problemset/problem/1931/F) (1500, topological sort)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
| 2026-10-12 | 1948C Arrow Path | not recorded | accepted, vague hints | Solved it as a BFS over the 2 x n grid, one second = step then arrow = one edge. Went wrong twice before it ran: (1) started from the exit but applied the forward move rule, so the search answered a different question; reversing a search means reversing the move too. (2) Inserted the start into visited before popping it, so the BFS skipped itself. Also: goal check belongs on the popped cell, answer belongs in a bool flag, not q.size(). |
| 2026-11-26 | [2033E Sakurako, Kosuke, and the Permutation](https://codeforces.com/problemset/problem/2033/E) (1400) | not recorded | accepted, three small hints on the idea, two nudges on C++ slips | Saw alone that fixed points and swapped pairs are already fine and should not be touched, and felt lost on the rest. Hints: draw i -> p_i for a sample (saw the circle), do one swap and redraw (saw it split into a 2-circle and a 3-circle), then asked for the cost of a circle of length L and got both parities right alone: L/2 for odd, L/2 - 1 for even, which is (L - 1) / 2. The hard part was trusting the split. What made it click was the arrow picture: swapping p_1 and p_3 means positions 1 and 3 trade arrows, so 1 jumps to 4 and 3 points back at 2; the path 1 -> [2 -> 3] -> 4 has the bracket snipped out and tied into a pair. Recipe: x, y = p[x], z = p[y], swap p[x] and p[z]. Lower bound: a circle of L needs ceil(L/2) pieces and a swap adds at most one. Code was quick. Slips: a missing brace after the for (the compiler's error pointed at cout, far from the cause), and vector<int> p(0, n+1), which is size 0 filled with n+1 (segfault); the size comes first. Visited marks are in a set<int>, which is O(n log n) for n = 1e6; a vector<bool> would be faster. |
