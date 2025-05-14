<!-- Creare una classe astratta "Veicolo" con un metodo astratto "ferma()". Creare una classe "Auto" che estende la classe astratta e implementa il metodo "ferma()" per fermare l'auto. -->

<?php
abstract class Veicolo {
    abstract public function ferma();
}

class Auto extends Veicolo {
    public function ferma() {
        return "L'auto è stata fermata.";
    }
}

$auto = new Auto();
echo $auto->ferma();
?>