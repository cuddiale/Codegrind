-- Ottieni il nome dei prodotti e il nome dei fornitori utilizzando gli alias "p" per la tabella "Prodotto" e "f" per la tabella "Fornitore".

SELECT p.Nome, f.Nome
FROM Prodotto AS p
JOIN Fornitore AS f ON p.ID_Fornitore = f.ID;