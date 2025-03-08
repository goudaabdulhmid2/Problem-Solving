-- problem link: https://www.naukri.com/code360/problems/combine-two-tables_2110759?leftPanelTabValue=PROBLEM

SELECT P.FirstName ,P.LastName ,A.city ,A.State
FROM PERSON P LEFT JOIN Address A ON P.PersonId = A.PersonId;