/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/n-ary-tree-preorder-traversal/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-04 21:41:19
 *  Language     : C++
 * -------------------------------------------------
 */



/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    void dfs(Node* root, vector<int>& result) {
        if (!root) return;
        result.push_back(root->val);

        for (Node* child : root->children) {
            dfs(child, result);
        }
    }

public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        dfs(root, result);
        return result;
    }
};

// Accepted