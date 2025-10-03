/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-03 22:54:46
 *  Language     : C++
 * -------------------------------------------------
 */

 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == NULL || node->next == NULL) return;

        node->val = node->next->val;
        node->next = node->next->next;
    }
};

// Accepted