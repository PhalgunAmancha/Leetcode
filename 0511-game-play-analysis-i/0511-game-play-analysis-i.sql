# Write your MySQL query statement below
select player_id,event_date as first_login from 
(select p.*,row_number() over(partition by p.player_id order by p.event_date) as rn from Activity p)t where rn = 1;