-- Ottieni il nome del cliente con spazi aggiunti alla fine per raggiungere la lunghezza di 20 caratteri.

SELECT LPAD(Nome, 20, ' ') AS NomeConSpazi
FROM Cliente;