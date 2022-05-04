# Write your MySQL query statement below
SELECT email AS Email
FROM(SELECT email, COUNT(email) AS t FROM Person GROUP BY email) AS t1
WHERE t1.t>1
