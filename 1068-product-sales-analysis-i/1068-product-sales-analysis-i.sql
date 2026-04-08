# Write your MySQL query statement below
SELECT r.product_name, l.year, l.price
FROM Sales l
LEFT JOIN Product r
ON r.product_id = l.product_id