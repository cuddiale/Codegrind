-- Aggiungi un vincolo di unicità alla colonna "Email" nella tabella "Cliente"

ALTER TABLE Cliente
ADD CONSTRAINT UC_Email UNIQUE (Email);