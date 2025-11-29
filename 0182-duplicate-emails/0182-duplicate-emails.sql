# Write your MySQL query statement below
SELECT distinct(email) AS Email
FROM Person
WHERE email IN (
    SELECT email
    FROM Person
    GROUP BY email
    HAVING COUNT(email) > 1
);
