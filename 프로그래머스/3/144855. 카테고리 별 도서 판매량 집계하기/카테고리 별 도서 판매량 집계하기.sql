-- 코드를 입력하세요
SELECT CATEGORY,SUM(SALES) as TOTAL_SALES
FROM BOOK a ,BOOK_SALES b
WHERE a.BOOK_ID=b.BOOK_ID
AND TO_CHAR(b.SALES_DATE,'YYYY-MM-DD') LIKE '%2022-01%'
GROUP BY CATEGORY
ORDER BY CATEGORY