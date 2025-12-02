/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/sum-of-left-leaves/description/
 *  Problem Name : 404. Sum of Left Leaves
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-01 21:29:04
 *  Language     : C++
 * -------------------------------------------------
 */

 // =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

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
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root)
            return 0;

        int sum = 0;

        if (root->left && !root->left->left && !root->left->right) {
            sum += root->left->val;
        }

        return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};

// Accepted
