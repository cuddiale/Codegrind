<!-- Creare un trait e utilizzarlo in una classe. -->

<?php
trait Saluto {
    public function saluta() {
        echo "Ciao, mondo!";
    }
}

class Persona {
    use Saluto;
}

$persona = new Persona();
$persona->saluta(); // Output: Ciao, mondo!
?>