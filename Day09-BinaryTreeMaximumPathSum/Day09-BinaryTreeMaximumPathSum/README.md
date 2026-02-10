# Day 9 – Binary Tree Maximum Path Sum

## Approach
I solved this problem using recursion and depth-first search.
At each node, I calculated the maximum path sum passing through that node.
I ignored negative contributions by taking maximum with zero.
A global variable was used to track the maximum path sum found so far.
This ensures that the highest possible path sum in the tree is returned.

## Time Complexity
O(n)

## Space Complexity
O(h) 
(where h is the height of the tree due to recursion stack)
