-- Crea una vista chiamata "VistaProdotto" che mostri il codice prodotto, il titolo e il prezzo di tutti i prodotti.

CREATE VIEW VistaProdotto AS
SELECT
    CodiceProdotto,
    Titolo,
    Prezzo
FROM
    Prodotto;