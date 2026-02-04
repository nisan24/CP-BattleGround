/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/diameter-of-binary-tree/description/
 *  Problem Name : Diameter of Binary Tree
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-28 22:50:41
 *  Language     : C++
 * -------------------------------------------------
 */

// ----------------------------------------

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    int diameter = 0;

public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return diameter;
    }

private:
    int dfs(TreeNode* root) {
        if (!root)
            return 0;

        int left = dfs(root->left);
        int right = dfs(root->right);

        diameter = max(diameter, left + right);
        return 1 + max(left, right);
    }
};

// Accepted