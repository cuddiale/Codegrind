<!-- Creare un'interfaccia "Database" con metodi "connetti()", "eseguiQuery($query)" e "chiudiConnessione()". Creare una classe "MySQLDatabase" che implementa l'interfaccia e implementa i metodi per la connessione, l'esecuzione delle query e la chiusura della connessione a un database MySQL. -->

<?php
interface Database {
    public function connetti();
    public function eseguiQuery($query);
    public function chiudiConnessione();
}

class MySQLDatabase implements Database {
    public function connetti() {
        // Connessione al database MySQL
    }

    public function eseguiQuery($query) {
        // Esecuzione della query
    }

    public function chiudiConnessione() {
        // Chiusura della connessione al database
    }
}

$database = new MySQLDatabase();
$database->connetti();
$database->eseguiQuery("SELECT * FROM utenti");
$database->chiudiConnessione();
?>