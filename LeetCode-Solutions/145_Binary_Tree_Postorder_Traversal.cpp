/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/binary-tree-postorder-traversal/description/
 *  Problem Name : Binary_Tree_Postorder_Traversal
 *  Author       : Nisan Hossain
 * Created At   : 2025-09-28 23:33:58
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
public:
    vector<int> result;
    void postorder(TreeNode* root){
        if (root == NULL) return;
        postorder(root->left);
        postorder(root->right);
        result.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return result;
    }
};

// Accepted