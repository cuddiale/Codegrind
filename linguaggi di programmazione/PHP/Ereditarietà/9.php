<!-- Creare una classe "Veicolo" con il metodo "accelera()" che stampa "Veicolo in accelerazione". Creare una classe "Automobile" che eredita dalla classe "Veicolo" e ridefinisce il metodo "accelera()" per stampare "Automobile in accelerazione". Creare una classe "Moto" che eredita dalla classe "Veicolo" e ridefinisce il metodo "accelera()" per stampare "Moto in accelerazione". -->

<?php
class Veicolo {
    public function accelera() {
        echo "Veicolo in accelerazione.";
    }
}

class Automobile extends Veicolo {
    public function accelera() {
        echo "Automobile in accelerazione.";
    }
}

class Moto extends Veicolo {
    public function accelera() {
        echo "Moto in accelerazione.";
    }
}

$veicolo = new Veicolo();
$veicolo->accelera(); // Output: Veicolo in accelerazione.

$automobile = new Automobile();
$automobile->accelera(); // Output: Automobile in accelerazione.

$moto = new Moto();
$moto->accelera(); // Output: Moto in accelerazione.
?>