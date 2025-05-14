<!-- Creare una classe astratta "Animale" con un metodo astratto "emettiVerso()". Creare una classe "Cane" che estende la classe astratta e implementa il metodo "emettiVerso()" per far abbaiare il cane. -->

<?php
abstract class Animale {
    abstract public function emettiVerso();
}

class Cane extends Animale {
    public function emettiVerso() {
        return "Woof woof!";
    }
}

$cane = new Cane();
echo $cane->emettiVerso();
?>