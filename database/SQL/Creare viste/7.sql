-- Crea una vista chiamata "VistaProdottiInPromozione" che mostri il codice prodotto, il titolo e il prezzo dei prodotti con uno sconto superiore al 10%.

CREATE VIEW VistaProdottiInPromozione AS
SELECT
    CodiceProdotto,
    Titolo,
    Prezzo
FROM
    Prodotto
WHERE
    Sconto > 10;