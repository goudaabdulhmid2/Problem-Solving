SELECT activity_date as day , count(DISTINCT user_id) as active_users 
FROM Activity WHERE activity_date BETWEEN DATE('2019-06-28') AND DATE('2019-07-27')
GROUP BY activity_date;