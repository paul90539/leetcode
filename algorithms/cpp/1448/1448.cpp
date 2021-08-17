/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int goodNodesRecursive(TreeNode* root, int maxi) {
        if(root == nullptr) return 0;
        maxi = max(maxi, root->val);
        return goodNodesRecursive(root->left, maxi) + goodNodesRecursive(root->right, maxi) + (root->val < maxi ? 0 : 1);
    }
    
    int goodNodes(TreeNode* root) {
        return goodNodesRecursive(root, root->val); //O(n)
    }
};
