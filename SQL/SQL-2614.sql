SELECT c.name, r.rentals_date
FROM customers c, rentals r
WHERE c.id = r.id_customers
    AND EXTRACT(MONTH FROM r.rentals_date) = 9 
    AND EXTRACT(YEAR FROM r.rentals_date) = 2016