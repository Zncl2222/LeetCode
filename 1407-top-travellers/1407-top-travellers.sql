# Write your MySQL query statement below
SELECT t1.name, IFNULL(SUM(t2.distance),0) AS travelled_distance
FROM Users t1 LEFT JOIN Rides t2 ON t1.id=t2.user_id
GROUP BY t1.name
ORDER BY travelled_distance DESC, name ASC
