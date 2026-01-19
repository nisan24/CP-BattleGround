/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/bank-account-summary-ii/
 *  Problem Name : 1587. Bank Account Summary II
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-19 16:41:25
 *  Language     : C++
 * -------------------------------------------------
 */

# Write your MySQL query statement below

SELECT u.name, SUM(t.amount) AS balance
FROM Users u
JOIN Transactions t
    ON u.account = t.account
GROUP BY u.account, u.name
HAVING balance > 10000;


# Accepted