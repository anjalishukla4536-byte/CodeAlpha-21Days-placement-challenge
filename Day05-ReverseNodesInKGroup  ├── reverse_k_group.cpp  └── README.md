# Day 5 – Reverse Nodes in K-Group

## Problem
Given the head of a linked list, reverse the nodes of the list in groups of size k.
If the number of nodes is not a multiple of k, the remaining nodes are left as they are.

## Approach
I solved this problem by reversing the linked list in groups of size k.
A dummy node was used to simplify pointer handling.
For each group, I first checked whether k nodes were available.
If yes, I reversed those k nodes by adjusting the links.
If fewer than k nodes remained, I left them unchanged.
The reversal was done in-place without using extra space.

## Time Complexity
O(n)

## Space Complexity
O(1)

## LeetCode Link
https://leetcode.com/problems/reverse-nodes-in-k-group
