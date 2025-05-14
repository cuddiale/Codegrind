<!-- Creare una classe "Veicolo" con il metodo "avvia()" che stampa "Veicolo avviato". Creare una classe "Automobile" che eredita dalla classe "Veicolo" e ridefinisce il metodo "avvia()" per stampare "Automobile avviata". -->

<?php
class Veicolo {
    public function avvia() {
        echo "Veicolo avviato.";
    }
}

class Automobile extends Veicolo {
    public function avvia() {
        echo "Automobile avviata.";
    }
}

$veicolo = new Veicolo();
$veicolo->avvia(); // Output: Veicolo avviato.

$automobile = new Automobile();
$automobile->avvia(); // Output: Automobile avviata.
?>
