class Solution {
public:
    int maxSum = INT_MIN;

    int dfs(TreeNode* node) {
        if (!node) return 0;

        // Max gain from left and right (ignore negatives)
        int leftGain = max(0, dfs(node->left));
        int rightGain = max(0, dfs(node->right));

        // Path passing through current node
        int currentPath = node->val + leftGain + rightGain;

        // Update global max
        maxSum = max(maxSum, currentPath);

        // Return max gain to parent
        return node->val + max(leftGain, rightGain);
    }

    int maxPathSum(TreeNode* root) {
        dfs(root);
        return maxSum;
    }
};
