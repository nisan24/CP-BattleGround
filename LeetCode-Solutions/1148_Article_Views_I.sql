/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/article-views-i/description/
 *  Problem Name : 1148. Article Views I
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-25 21:45:24
 *  Language     : C++
 * -------------------------------------------------
 */

# Write your MySQL query statement below

SELECT DISTINCT author_id AS id
FROM Views
WHERE author_id = viewer_id
ORDER BY author_id;

# Accepted
//dj