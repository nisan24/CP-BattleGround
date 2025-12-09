/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-09 22:05:58
 *  Language     : C++
 * -------------------------------------------------
 */



# Write your MySQL query statement below

SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(student) >= 5;

# Accepted