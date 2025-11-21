/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/find-customer-referee/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-21 21:01:00
 *  Language     : C++
 * -------------------------------------------------
 */


# Write your MySQL query statement below
SELECT name
FROM customer
WHERE referee_id <> 2 OR referee_id IS NULL;

# Accpeted