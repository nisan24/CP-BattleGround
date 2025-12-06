/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/customer-placing-the-largest-number-of-orders/description/
 *  Problem Name : 586. Customer Placing the Largest Number of Orders
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-06 23:37:52
 *  Language     : C++
 * -------------------------------------------------
 */

# Write your MySQL query statement below
SELECT customer_number
FROM Orders
GROUP BY customer_number
ORDER BY COUNT(*) DESC
LIMIT 1;


# Accepted