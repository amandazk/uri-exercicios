SELECT Concat('Approved: ', name), grade
FROM students
WHERE grade >=7
order by grade DESC