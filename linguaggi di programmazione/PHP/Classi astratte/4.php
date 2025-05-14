<!-- Creare una classe astratta "Persona" con un metodo astratto "saluta()". Creare una classe "Studente" che estende la classe astratta e implementa il metodo "saluta()" per salutare come studente. -->

<?php
abstract class Persona {
    abstract public function saluta();
}

class Studente extends Persona {
    public function saluta() {
        return "Ciao! Sono uno studente.";
    }
}

$studente = new Studente();
echo $studente->saluta();
?>
