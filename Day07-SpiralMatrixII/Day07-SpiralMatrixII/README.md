# Day 7 – Spiral Matrix II

## Approach
I generated the matrix using boundary variables.
I filled the matrix in spiral order by moving right, down, left, and up.
After completing each direction, I updated the boundaries.
This continued until all values from 1 to n*n were filled.

## Time Complexity
O(n^2)

## Space Complexity
O(n^2)
