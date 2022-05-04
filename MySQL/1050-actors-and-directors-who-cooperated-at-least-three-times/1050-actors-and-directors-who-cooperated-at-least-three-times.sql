# Write your MySQL query statement below
SELECT actor_id,director_id
FROM
(SELECT actor_id, director_id, COUNT(director_id) AS t
FROM ActorDirector
GROUP BY actor_id, director_id
HAVING(t>2)) t1