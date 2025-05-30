-- Ottieni il nome dei prodotti, il nome dei fornitori che li forniscono e il nome dei dipartimenti in cui si trovano.

SELECT p.Nome, f.Nome, d.Nome
FROM Prodotto AS p
JOIN Fornitore AS f
    ON p.ID_Fornitore = f.ID
JOIN Dipartimento AS d
    ON f.ID_Dipartimento = d.ID;