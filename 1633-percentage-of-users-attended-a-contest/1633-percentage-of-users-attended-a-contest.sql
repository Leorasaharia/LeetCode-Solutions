select r.contest_id, round(count(distinct r.user_id) * 100.0 / (select count(distinct user_id) from users), 2) as percentage 
from register r 
group by r.contest_id 
order by percentage desc, r.contest_id asc;
