-- Ottieni il cognome dei dipendenti concatenato con il loro nome, separati da uno spazio.

SELECT CONCAT(Cognome, ' ', Nome) AS NomeCompleto
FROM Dipendente;