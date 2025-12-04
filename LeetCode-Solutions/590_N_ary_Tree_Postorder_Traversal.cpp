/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/n-ary-tree-postorder-traversal/description/
 *  Problem Name : 590. N-ary Tree Postorder Traversal
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-06 20:09:16
 *  Language     : C++
 * -------------------------------------------------
 */

// ==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

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
        if (!root)
            return;

        for (Node* child : root->children) {
            dfs(child, result);
        }
        result.push_back(root->val);
    }

public:
    vector<int> postorder(Node* root) {
        vector<int> result;
        dfs(root, result);
        return result;
    }
};

// Accepted