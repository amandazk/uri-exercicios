SELECT c.name, o.id
FROM customers c, orders o
WHERE c.id = o.id_customers
    AND EXTRACT(MONTH FROM o.orders_date) <= 6