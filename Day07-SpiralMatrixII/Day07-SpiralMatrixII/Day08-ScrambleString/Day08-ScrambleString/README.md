# Day 8 – Scramble String

## Approach
I solved this problem using recursion with memoization.
I checked all possible split positions and considered both swap and no-swap cases.
To avoid repeated computations, I stored results of subproblems.
This improved performance significantly.

## Time Complexity
O(n^4)

## Space Complexity
O(n^3)
