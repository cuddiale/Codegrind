<!-- Creare una classe "Database" con una proprietà statica "connessione" che rappresenta la connessione al database e un metodo statico "connetti()" che stabilisce la connessione al database. -->

<?php
class Database {
    public static $connessione;

    public static function connetti() {
        self::$connessione = /* Logica per la connessione al database */;
    }
}

Database::connetti();
?>