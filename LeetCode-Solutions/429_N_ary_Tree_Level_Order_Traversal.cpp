/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/n-ary-tree-level-order-traversal/description/
 *  Problem Name :  N-ary Tree Level Order Traversal
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-07 22:23:08
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
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (!root) return {};

        vector<vector<int>> result;
        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> level;
            level.reserve(levelSize);

            for (int i = 0; i < levelSize; i++) {
                Node* curr = q.front();
                q.pop();

                level.push_back(curr->val);

                for (auto child : curr->children) {
                    if (child) q.push(child);
                }
            }

            result.push_back(move(level));
        }

        return result;
    }
};

// Accepted