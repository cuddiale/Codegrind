<!-- Creare una classe astratta "Veicolo" con un metodo astratto "avvia()". Creare una classe "Moto" che estende la classe astratta e implementa il metodo "avvia()" per avviare la moto. -->

<?php
abstract class Veicolo {
    abstract public function avvia();
}

class Moto extends Veicolo {
    public function avvia() {
        return "La moto è stata avviata.";
    }
}

$moto = new Moto();
echo $moto->avvia();
?>