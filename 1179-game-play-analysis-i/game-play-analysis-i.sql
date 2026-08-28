-- Write your PostgreSQL query statement below
select
player_id,
event_date AS first_login
from (
    SELECT
        player_id,
        event_date,
        ROW_NUMBER() OVER(
            PARTITION BY player_id
            ORDER BY event_date
        ) AS rn
    FROM Activity
) t
where rn=1