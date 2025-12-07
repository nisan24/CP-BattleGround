/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/big-countries/description/
 *  Problem Name : 595. Big Countries
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-07 23:12:35
 *  Language     : C++
 * -------------------------------------------------
 */


# Write your MySQL query statement below

SELECT 
    name, 
    population, 
    area
FROM 
    world
WHERE 
    area >= 3000000 
    OR population >= 25000000;

# Accepted