-- Modifica la vista "VistaCliente" in modo che includa solo i clienti con un abbonamento attivo.

CREATE OR REPLACE VIEW VistaCliente AS
SELECT
    IdCliente,
    Nome,
    Cognome,
    Email
FROM
    Cliente
WHERE
    AbbonamentoAttivo = 1;