# Games

Status: not started

## What it is
Two players alternate moves, both play optimally, who wins? At this level the answer is almost always a parity or symmetry argument, sometimes a small dp over positions.

## Patterns and formulas
- **Winning / losing positions.** A position is losing if every move leads to a winning position for the opponent. Winning if any move leads to a losing position. Fill from the terminal state.
- **Parity of total moves.** If the game always lasts exactly k moves, first player wins iff k is odd.
- **Symmetry / mirroring.** Second player copies the first player's move on the other side and can never lose.
- **Nim.** XOR of pile sizes is zero means the current player loses.
- **First player picks the parity.** When the first player can choose how many to take, they usually control the game. Look at the first pile or first move.
- **Simulate small n** and find the period of the win/lose pattern.

**Learn:** [cp-algorithms: Sprague-Grundy and Nim](https://cp-algorithms.com/game_theory/sprague-grundy-nim.html) (intro only), [Winning/losing positions](https://usaco.guide/adv/game-theory)

## Pitfalls
- "Optimal" means both players try to win, not maximize score, unless stated.
- Check who moves first and what happens when no move is possible (that player loses, usually).
- The answer pattern often depends on n mod something small. Print the table for n = 1..12.

## Plan
1. [ ] [1956A Nene's Game](https://codeforces.com/problemset/problem/1956/A) (900)
2. [ ] [2042B Game with Colored Marbles](https://codeforces.com/problemset/problem/2042/B) (1000)
3. [ ] [2104C Card Game](https://codeforces.com/problemset/problem/2104/C) (1100)
4. [ ] [2107B Apples in Boxes](https://codeforces.com/problemset/problem/2107/B) (1100)
5. [ ] [1921E Eat the Chip](https://codeforces.com/problemset/problem/1921/E) (1600, stretch)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
