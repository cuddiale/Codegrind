<!-- Creare un'interfaccia "Animale" con un metodo "emettiVerso()". Creare una classe "Cane" che implementa l'interfaccia e implementa il metodo "emettiVerso()" per far abbaiare il cane. -->

<?php
interface Animale {
    public function emettiVerso();
}

class Cane implements Animale {
    public function emettiVerso() {
        return "Woof woof!";
    }
}

$cane = new Cane();
echo $cane->emettiVerso();
?>