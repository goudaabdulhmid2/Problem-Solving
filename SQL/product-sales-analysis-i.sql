-- PRoblem link https://leetcode.com/problems/product-sales-analysis-i/submissions/1609889035/?envType=study-plan-v2&envId=top-sql-50
SELECT p.product_name, s.year, s.price
FROM Product p
INNER JOIN Sales s ON p.product_id=s.product_id;