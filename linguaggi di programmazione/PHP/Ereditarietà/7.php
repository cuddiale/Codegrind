<!-- Creare una classe "Animale" con il metodo "mangia()" che stampa "L'animale sta mangiando". Creare una classe "Cane" che eredita dalla classe "Animale" e ridefinisce il metodo "mangia()" per stampare "Il cane sta mangiando". -->

<?php
class Animale {
    public function mangia() {
        echo "L'animale sta mangiando.";
    }
}

class Cane extends Animale {
    public function mangia() {
        echo "Il cane sta mangiando.";
    }
}

$animale = new Animale();
$animale->mangia(); // Output: L'animale sta mangiando.

$cane = new Cane();
$cane->mangia(); // Output: Il cane sta mangiando.
?>