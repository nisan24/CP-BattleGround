/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/search-in-a-binary-search-tree/description/
 *  Problem Name : 700. Search in a Binary Search Tree
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-17 22:35:30
 *  Language     : C++
 * -------------------------------------------------
 */

// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root)
            return NULL;
        if (val == root->val)
            return root;
        if (val > root->val)
            return searchBST(root->right, val);
        else {
            return searchBST(root->left, val);
        }
    }
};

// Accepted