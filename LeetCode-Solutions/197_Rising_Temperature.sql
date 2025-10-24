/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/rising-temperature/description/
 *  Problem Name : Rising Temperature
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-24 22:05:23
 *  Language     : C++
 * -------------------------------------------------
 */

# Write your MySQL query statement below
SELECT w1.id
FROM Weather w1
JOIN Weather w2
  ON DATEDIFF(w1.recordDate, w2.recordDate) = 1
WHERE w1.temperature > w2.temperature;

# Accepted