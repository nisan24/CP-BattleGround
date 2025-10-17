/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/maximum-depth-of-n-ary-tree/description/
 *  Problem Name : Maximum Depth of N-ary Tree
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-17 22:55:26
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
    int maxDepth(Node* root) {
        if (!root) return 0;

        int maxChildDepth = 0;
        for (Node* child : root->children) {
            maxChildDepth = max(maxChildDepth, maxDepth(child));
        }

        return maxChildDepth + 1;
    }
};

// Accepted