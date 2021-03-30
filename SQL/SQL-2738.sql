SELECT c.name, 
     cast((((s.math * 2) + (specific *3) + 
     (project_plan * 5)) / 10) 
     AS NUMERIC(15, 2)) AS avg
FROM candidate c, score s
WHERE c.id = s.candidate_id
ORDER BY avg DESC