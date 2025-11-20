/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/binary-tree-paths/description/
 *  Problem Name : 257. Binary Tree Paths
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-20 22:20:56
 *  Language     : C++
 * -------------------------------------------------
 */

// -=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

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
    void dfs(TreeNode* root, vector<string>& ans, string path) {
        if (!root)
            return;

        path += to_string(root->val);

        if (!root->left && !root->right) {
            ans.push_back(path);
            return;
        }

        dfs(root->left, ans, path + "->");
        dfs(root->right, ans, path + "->");
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        dfs(root, ans, "");
        return ans;
    }
};

// Accepted