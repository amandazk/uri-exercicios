SELECT name, round(salary/10 ,2) as tax
FROM people
WHERE salary > 3000;