-- Ottieni il nome dei fornitori, il nome dei prodotti che forniscono e il nome dei dipartimenti in cui si trovano i prodotti.

SELECT f.Nome, p.Nome, d.Nome
FROM Fornitore AS f
JOIN Prodotto AS p
    ON f.ID = p.ID_Fornitore
JOIN Dipartimento AS d
    ON f.ID_Dipartimento = d.ID;