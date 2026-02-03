 Day 2 – Longest Substring Without Repeating Characters

## Approach
I used the sliding window technique with two pointers.
A set was used to store unique characters of the current substring.
When a repeated character was found, the window was adjusted by moving the left pointer.
The maximum length was updated during traversal.

#Time Complexity
O(n)

#Space Complexity
O(n)
