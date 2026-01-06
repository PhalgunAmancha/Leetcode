# Write your MySQL query statement below
-- select s.name
-- from SalesPerson s
-- left join Orders o
-- on s.sales_id = o.sales_id
-- left join Company c
-- on o.com_id = c.com_id
-- and c.name = 'RED'
-- where o.order_id is null;

SELECT s.name
FROM SalesPerson s
WHERE NOT EXISTS (
    SELECT 1
    FROM Orders o
    JOIN Company c
      ON o.com_id = c.com_id
    WHERE o.sales_id = s.sales_id
      AND c.name = 'RED'
);


