/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
 *  Problem Name : 108. Convert Sorted Array to Binary Search Tree
 *  Author       : Nisan Hossain
 * Created At   : 2025-09-20 22:47:55
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, static_cast<int>(nums.size()) - 1);
    }

private:
    TreeNode* build(const vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;

        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        
        root->left = build(nums, left, mid - 1);
        root->right = build(nums, mid + 1, right);
        
        return root;
    }
};

// Accepted
// b
