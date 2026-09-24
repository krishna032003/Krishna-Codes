# Write your MySQL query statement below
SELECT a1.activity_date as day,(SELECT COUNT(DISTINCT user_id) FROM Activity a2 WHERE a2.activity_date=a1.activity_date) AS 'active_users' FROM Activity a1 WHERE a1.activity_date BETWEEN '2019-06-28' AND '2019-07-27'  GROUP BY a1.activity_date;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna