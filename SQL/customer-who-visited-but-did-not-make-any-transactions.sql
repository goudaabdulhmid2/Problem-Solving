-- Problem Link https://leetcode.com/problems/customer-who-visited-but-did-not-make-any-transactions/submissions/1611810574/?envType=study-plan-v2&envId=top-sql-50

SELECT customer_id,COUNT(customer_id) AS count_no_trans
FROM Visits v
LEFT OUTER JOIN Transactions t ON  v.visit_id=t.visit_id 
WHERE t.visit_id IS NULL GROUP BY customer_id;