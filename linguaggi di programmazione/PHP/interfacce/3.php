<!-- Creare un'interfaccia "Volante" con un metodo "volare()". Creare una classe "Aereo" che implementa l'interfaccia e implementa il metodo "volare()" per far volare l'aereo. -->

<?php
interface Volante {
    public function volare();
}

class Aereo implements Volante {
    public function volare() {
        return "L'aereo sta volando!";
    }
}

$aereo = new Aereo();
echo $aereo->volare();
?>
