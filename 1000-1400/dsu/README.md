# DSU (union-find)

Status: in progress (1 solved)

## What it is
Keep track of which elements are in the same group while merging groups. Two ops, `find` and `unite`, both effectively O(1).

## Patterns and formulas
- **Template.**
  ```
  vector<int> p(n+1), sz(n+1, 1); iota(all(p), 0);
  int find(int x) { while (p[x] != x) { p[x] = p[p[x]]; x = p[x]; } return x; }
  bool unite(int a, int b) { a = find(a); b = find(b); if (a == b) return false;
      if (sz[a] < sz[b]) swap(a, b); p[b] = a; sz[a] += sz[b]; return true; }
  ```
- **Number of components** = n minus number of successful unites.
- **Component size / sum / max** stored at the root and merged in `unite`.
- **Offline connectivity.** Sort edges or queries, unite in order, answer as you go.
- **"Are u and v connected"** = `find(u) == find(v)`.
- **Kruskal MST** = sort edges by weight, unite if different components.

**Learn:** [USACO Guide: DSU](https://usaco.guide/gold/dsu), [cp-algorithms: DSU](https://cp-algorithms.com/data_structures/disjoint_set_union.html)

## Pitfalls
- Initialize `p[i] = i`. Forgetting this is the number one bug.
- Compare roots, not the raw nodes.
- When the graph is given fully up front and you only need components once, plain DFS is equally fine. DSU wins when edges arrive over time.

## Plan
0. [x] [2008D Sakurako's Hobby](https://codeforces.com/problemset/problem/2008/D) (1100) — solved 2026-10-12, came from the graphs plan
1. [ ] [1971G XOUR](https://codeforces.com/problemset/problem/1971/G) (1400)
2. [ ] [2060E Graph Composition](https://codeforces.com/problemset/problem/2060/E) (1500)
3. [ ] [1985H1 Maximize the Largest Component, Easy](https://codeforces.com/problemset/problem/1985/H1) (1700, stretch)
4. [ ] [1994D Funny Game](https://codeforces.com/problemset/problem/1994/D) (1700, stretch)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
| 2026-10-12 | 2008D Sakurako's Hobby | not recorded | accepted, with hints | Spotted DSU on my own but had to rebuild the struct from memory (path compression, union by size, `union` is a keyword). Joined i with p_i, correct. Then tried to count blacks by walking the parent chain, which only sees one branch of the set's tree. Fix: loop all nodes once, add each black to `cnt[find(i)]`, then answer is `cnt[find(i)]`. Realization that unlocked it: a permutation has in-degree = out-degree = 1 everywhere, so every component is a cycle and "reachable from i" is the whole component. |
