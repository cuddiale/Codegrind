-- Crea una tabella chiamata "Prenotazione" con le colonne "ID" (chiave primaria), "IDCliente" (chiave esterna), "IDCamera" (chiave esterna) e "DataArrivo"

CREATE TABLE Prenotazione (
    ID INT PRIMARY KEY,
    IDCliente INT,
    IDCamera INT,
    DataArrivo DATE,
    FOREIGN KEY (IDCliente) REFERENCES Cliente(ID),
    FOREIGN KEY (IDCamera) REFERENCES Camera(ID)
);
