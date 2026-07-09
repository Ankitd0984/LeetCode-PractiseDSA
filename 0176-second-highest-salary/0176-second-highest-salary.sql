select MAX(salary) as SecondHighestSalary from Employee 
where salary < (Select Max(Salary) from Employee);