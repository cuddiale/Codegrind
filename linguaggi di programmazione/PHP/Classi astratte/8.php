<!-- Creare una classe astratta "Animale" con un metodo astratto "emettiSuono()". Creare una classe "Gatto" che estende la classe astratta e implementa il metodo "emettiSuono()" per fare il verso del gatto. -->

<?php
abstract class Animale {
    abstract public function emettiSuono();
}

class Gatto extends Animale {
    public function emettiSuono() {
        return "Miao!";
    }
}

$gatto = new Gatto();
echo $gatto->emettiSuono();
?>