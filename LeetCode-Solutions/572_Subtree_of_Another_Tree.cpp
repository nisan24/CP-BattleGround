/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/subtree-of-another-tree/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-15 22:01:46
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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* s, TreeNode* t) {
        if (!s && !t)
            return true;
        if (!s || !t)
            return false;
        if (s->val != t->val)
            return false;

        return isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
    }

    bool isSubtree(TreeNode* s, TreeNode* t) {
        if (!s)
            return false;

        if (isSameTree(s, t))
            return true;

        return isSubtree(s->left, t) || isSubtree(s->right, t);
    }
};

// Accepted