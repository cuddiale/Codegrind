<!-- Creare una classe astratta "Veicolo" con un metodo astratto "accelera()". Creare una classe "Automobile" che estende la classe astratta e implementa il metodo "accelera()" per accelerare l'automobile. -->

<?php
abstract class Veicolo {
    abstract public function accelera();
}

class Automobile extends Veicolo {
    public function accelera() {
        return "L'automobile sta accelerando...";
    }
}

$auto = new Automobile();
echo $auto->accelera();
?>
