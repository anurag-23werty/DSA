SELECT
    machine_id,
    ROUND(
        AVG(
            (
                SELECT a2.timestamp
                FROM Activity a2
                WHERE a2.activity_type = 'end'
                  AND a2.process_id = a1.process_id
                  AND a2.machine_id = a1.machine_id
            ) - a1.timestamp
        )::numeric,
        3
    ) AS processing_time
FROM Activity a1
WHERE a1.activity_type = 'start'
GROUP BY machine_id;