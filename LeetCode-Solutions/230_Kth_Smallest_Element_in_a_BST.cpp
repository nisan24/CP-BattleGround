/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-13 23:13:11
 *  Language     : C++
 * -------------------------------------------------
 */

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
    int count = 0;
    int result = 0;
    bool found = false;

    void inorder(TreeNode* node, int k) {
        if (!node || found) return;

        inorder(node->left, k);

        count++;
        if (count == k) {
            result = node->val;
            found = true; 
            return;
        }

        inorder(node->right, k);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return result;
    }
};


// Accepted