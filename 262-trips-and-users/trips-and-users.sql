-- Write your PostgreSQL query statement below
select request_at as Day,
round(
    sum(
        case 
            when status = 'cancelled_by_driver'
                or status = 'cancelled_by_client'
            then 1
            else 0
        end
    )::numeric/count(*),2
) as "Cancellation Rate"
from Trips t
join Users u
on t.client_id = u.users_id 
and u.banned ='No'
join Users us
on t.driver_id = us.users_id
and us.banned = 'No'
where request_at BETWEEN '2013-10-01' AND '2013-10-03'
GROUP BY request_at;
