<!-- Utilizzare un trait con un metodo costruttore. -->

<?php
trait Inizializzazione {
    public function __construct() {
        echo "Oggetto inizializzato.";
    }
}

class Oggetto {
    use Inizializzazione;
}

$obj = new Oggetto(); // Output: Oggetto inizializzato.
?>