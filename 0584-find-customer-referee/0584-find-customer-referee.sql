# Write your MySQL query statement below
select c.name
from Customer c
left join Customer p
on c.referee_id = p.id
where c.referee_id != 2
or c.referee_id is null;