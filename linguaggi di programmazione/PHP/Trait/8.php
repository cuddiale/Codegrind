<!-- Sostituire un metodo di un trait in una classe. -->

<?php
trait Saluto {
    public function saluta() {
        echo "Ciao, mondo!";
    }
}

class Persona {
    use Saluto;

    public function saluta() {
        echo "Buongiorno, mondo!";
    }
}

$persona = new Persona();
$persona->saluta(); // Output: Buongiorno, mondo!
?>