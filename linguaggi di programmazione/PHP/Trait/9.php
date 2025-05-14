<!-- Ereditare una classe che utilizza un trait. -->

<?php
trait Saluto {
    public function saluta() {
        echo "Ciao, mondo!";
    }
}

class Persona {
    use Saluto;
}

class Studente extends Persona {
    public function studia() {
        echo "Sto studiando.";
    }
}

$studente = new Studente();
$studente->saluta(); // Output: Ciao, mondo!
$studente->studia(); // Output: Sto studiando.
?>