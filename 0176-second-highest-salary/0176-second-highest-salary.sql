select max(salary) as SecondHighestSalary from Employee where salary <(max(salary) from Employee)
