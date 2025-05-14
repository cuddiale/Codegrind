<!-- Creare una classe "Animale" con il metodo "verso()" che restituisce il verso dell'animale. Creare una classe "Cane" che eredita dalla classe "Animale" e ridefinisce il metodo "verso()" restituendo il verso del cane. -->

<?php
class Animale {
    public function verso() {
        return "Verso generico";
    }
}

class Cane extends Animale {
    public function verso() {
        return "Bau bau!";
    }
}

$animale = new Animale();
echo $animale->verso(); // Output: Verso generico

$cane = new Cane();
echo $cane->verso(); // Output: Bau bau!
?>