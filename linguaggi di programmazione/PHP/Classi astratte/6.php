<!-- Creare una classe astratta "Forma" con un metodo astratto "disegna()". -->

<?php
abstract class Forma {
    abstract public function disegna();
}

class Cerchio extends Forma {
    public function disegna() {
        return "Disegna un cerchio";
    }
}

$cerchio = new Cerchio();
echo $cerchio->disegna();
?>