-- Problem Link https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/?envType=study-plan-v2&envId=top-sql-50
SELECT IFNULL(eu.unique_id, NULL) AS unique_id,e.name
FROM Employees e LEFT OUTER JOIN EmployeeUNI eu
ON e.id=eu.id;