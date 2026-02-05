/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-27 22:36:09
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> res;
        preorder(root, res);
        return res;
    }

private:
    void preorder(TreeNode *node, vector<int> &res)
    {
        if (!node)
            return;
        res.push_back(node->val);
        preorder(node->left, res);
        preorder(node->right, res);
    }
};

// lsdfj