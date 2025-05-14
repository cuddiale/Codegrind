<!-- Definire metodi astratti in un trait e implementarli in una classe. -->

<?php
trait Azioni {
    abstract public function saluta();
    abstract public function addio();
}

class Persona {
    use Azioni;

    public function saluta() {
        echo "Ciao!";
    }

    public function addio() {
        echo "Addio!";
    }
}

$persona = new Persona();
$persona->saluta(); // Output: Ciao!
$persona->addio();  // Output: Addio!
?>