/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/path-sum/description/
 *  Problem Name : 112. Path Sum
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-16 21:25:22
 *  Language     : C++
 * -------------------------------------------------
 */

// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;

        if (!root->left && !root->right) return targetSum == root->val;

        bool left_sum = hasPathSum(root->left, targetSum - root->val);
        bool right_sum = hasPathSum(root->right, targetSum - root->val);
        return left_sum || right_sum;
        
    }
};

// Accepted
// bff