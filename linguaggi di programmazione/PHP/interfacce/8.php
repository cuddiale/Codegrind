<!-- Creare un'interfaccia "Autenticabile" con un metodo "autentica($username, $password)". Creare una classe "Utente" che implementa l'interfaccia e implementa il metodo "autentica($username, $password)" per autenticare un utente. -->

<?php
interface Autenticabile {
    public function autentica($username, $password);
}

class Utente implements Autenticabile {
    public function autentica($username, $password) {
        // Logica di autenticazione
    }
}

$utente = new Utente();
$utente->autentica("admin", "password");
?>
