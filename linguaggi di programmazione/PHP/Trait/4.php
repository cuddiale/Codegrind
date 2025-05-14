<!-- Creare un alias per un metodo di un trait utilizzando `as`. -->

<?php
trait Saluto {
    public function saluta() {
        echo "Ciao, mondo!";
    }
}

class Persona {
    use Saluto {
        saluta as salutaInItaliano;
    }
}

$persona = new Persona();
$persona->salutaInItaliano(); // Output: Ciao, mondo!
?>