select case when mod(id, 2) = 1 and id + 1 <= (select max(id) from seat) then id + 1 when mod(id, 2) = 0 then id - 1 else id end as id, student from seat order by id;
