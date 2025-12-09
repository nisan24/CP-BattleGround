/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/classes-with-at-least-5-students/description/
 *  Problem Name : 596. Classes With at Least 5 Students
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