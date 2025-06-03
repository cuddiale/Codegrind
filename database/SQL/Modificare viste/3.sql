-- Modifica la vista "VistaNoleggio" per includere solo i noleggi effettuati nell'ultimo mese.

CREATE OR REPLACE VIEW VistaNoleggio AS
SELECT
    IdNoleggio,
    IdCliente,
    IdProdotto,
    DataNoleggio
FROM
    Noleggio
WHERE
    DataNoleggio >= DATE_SUB(CURDATE(), INTERVAL 1 MONTH);