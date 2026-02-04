/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/swap-sex-of-employees/description/
 *  Problem Name : 627. Swap Sex of Employees
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-15 16:35:38
 *  Language     : C++
 * -------------------------------------------------
 */

# Write your MySQL query statement below
UPDATE Salary
SET sex = IF(sex = 'f', 'm', 'f');


# Accepted