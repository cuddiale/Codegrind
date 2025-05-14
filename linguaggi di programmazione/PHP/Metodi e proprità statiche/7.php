<!-- Creare una classe "Utente" con una proprietà statica "ruolo" che rappresenta il ruolo dell'utente e un metodo statico "verificaAccesso()" che verifica se l'utente ha accesso alle risorse protette. -->

<?php
class Utente {
    public static $ruolo;

    public static function verificaAccesso() {
        if (self::$ruolo == 'amministratore') {
            echo "Accesso consentito!";
        } else {
            echo "Accesso negato!";
        }
    }
}

Utente::$ruolo = 'amministratore';
Utente::verificaAccesso(); // Output: Accesso consentito!

Utente::$ruolo = 'utente_normale';
Utente::verificaAccesso(); // Output: Accesso negato!
?>