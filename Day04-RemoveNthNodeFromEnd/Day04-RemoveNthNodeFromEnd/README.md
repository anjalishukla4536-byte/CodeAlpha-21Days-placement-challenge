# Day 4 – Remove Nth Node From End of List

## Approach
I solved this problem using the two-pointer technique in one pass.
A dummy node was used to handle edge cases easily.
The fast pointer was moved n+1 steps ahead, then both pointers were moved together.
When fast reached the end, the slow pointer was just before the node to be deleted.
The node was removed by adjusting the links.

## Time Complexity
O(n)

## Space Complexity
O(1)
