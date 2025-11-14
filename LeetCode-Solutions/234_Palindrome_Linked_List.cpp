/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-14 21:46:20
 *  Language     : C++
 * -------------------------------------------------
 */


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        while (head) {
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondHalf = reverseList(slow);

        ListNode* firstHalf = head;
        ListNode* check = secondHalf;
        while (check) {
            if (firstHalf->val != check->val)
                return false;
            firstHalf = firstHalf->next;
            check = check->next;
        }

        return true;
    }
};

// Accepted