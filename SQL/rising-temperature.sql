-- Problem link https://leetcode.com/problems/rising-temperature/?envType=study-plan-v2&envId=top-sql-50

SELECT DISTINCT x.id 
FROM Weather AS x 
INNER JOIN Weather AS y 
ON x.recordDate = ADDDATE(y.recordDate, 1) 
WHERE x.temperature > y.temperature;

