# Write your MySQL query statement below
select x,y,z,
case 
        WHEN x + y > z
         AND x + z > y
         AND y + z > x
        THEN 'Yes'
        ELSE 'No'
    END AS triangle
    from Triangle;