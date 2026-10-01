# Trees

Status: not started

## What it is
A connected graph with n nodes and n-1 edges. No cycles, so DFS from the root without a visited array by skipping the parent. Almost every tree problem is one DFS computing something per subtree.

## Patterns and formulas
- **Root it and DFS.**
  ```
  void dfs(int u, int par) { sz[u] = 1; depth[u] = depth[par] + 1;
      for v in g[u] if v != par { dfs(v, u); sz[u] += sz[v]; } }
  ```
- **Subtree size** as above. **Depth** as above. **Leaves** = nodes with one neighbor (or sz == 1).
- **Max depth / diameter.** Diameter = two BFS: from any node find the farthest a, from a find the farthest b.
- **Sum over subtree** of values: same accumulate pattern as size.
- **Rerooting** (1600+): compute down[u] in one DFS, up[u] in a second one.
- **Count children** = degree minus 1 for non-root.

**Learn:** [USACO Guide: Tree Traversal](https://usaco.guide/silver/tree-euler) (first half only), [Introduction to Tree Algorithms](https://usaco.guide/silver/dfs)

## Pitfalls
- The input is 1-indexed edges, n-1 lines.
- Recursion depth n for a path tree. For n <= 2e5 it usually fits, but be ready to go iterative.
- Don't confuse depth (from root) with height (to deepest leaf).

## Plan
1. [ ] [1950F 0, 1, 2, Tree!](https://codeforces.com/problemset/problem/1950/F) (1300)
2. [ ] [1997D Maximize the Root](https://codeforces.com/problemset/problem/1997/D) (1600)
3. [ ] [2114E Kirei Attacks the Estate](https://codeforces.com/problemset/problem/2114/E) (1600)
4. [ ] [2050G Tree Destruction](https://codeforces.com/problemset/problem/2050/G) (1900, stretch)
Note: trees rarely appear under 1500 in 2024+ rounds. This block is for after Tier 1 is solid.

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
