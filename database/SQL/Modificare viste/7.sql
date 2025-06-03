-- Modifica la vista "VistaProdottiInPromozione" per includere solo i prodotti con uno sconto maggiore del 20%.

CREATE OR REPLACE VIEW VistaProdottiInPromozione AS
SELECT
    IdProdotto,
    CodiceProdotto,
    Titolo,
    Prezzo
FROM
    Prodotto
WHERE
    Sconto > 20;