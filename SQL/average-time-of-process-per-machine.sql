-- Problem link https://leetcode.com/problems/average-time-of-process-per-machine/?envType=study-plan-v2&envId=top-sql-50

SELECT x.machine_id, ROUND(AVG(x.timestamp - y.timestamp), 3) AS processing_time
FROM Activity x
INNER JOIN Activity y
ON x.machine_id = y.machine_id 
AND x.process_id = y.process_id 
AND x.activity_type = 'end' 
AND y.activity_type = 'start'
GROUP BY x.machine_id;