/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/duplicate-emails/description/
 *  Problem Name : Duplicate Emails
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-16 21:42:38
 *  Language     : C++
 * -------------------------------------------------
 */

# Write your MySQL query statement below
SELECT email FROM Person
GROUP BY email
HAVING count(email) > 1;

# Accepted
#lk
#lk.sadf sd