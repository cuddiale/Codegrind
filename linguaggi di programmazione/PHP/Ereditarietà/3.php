<!-- Creare una classe "Persona" con le proprietà "nome" e "cognome" e il metodo "presentati()" che restituisce una stringa di presentazione della persona. Creare una classe "Studente" che eredita dalla classe "Persona" e ha una proprietà aggiuntiva "matricola". -->

<?php
class Persona {
    protected $nome;
    protected $cognome;

    public function __construct($nome, $cognome) {
        $this->nome = $nome;
        $this->cognome = $cognome;
    }

    public function presentati() {
        return "Sono {$this->nome} {$this->cognome}.";
    }
}

class Studente extends Persona {
    private $matricola;

    public function __construct($nome, $cognome, $matricola) {
        parent::__construct($nome, $cognome);
        $this->matricola = $matricola;
    }

    public function presentati() {
        return parent::presentati() . " La mia matricola è {$this->matricola}.";
    }
}

$persona = new Persona("Mario", "Rossi");
echo $persona->presentati(); // Output: Sono Mario Rossi.

$studente = new Studente("Luca", "Verdi", "12345");
echo $studente->presentati(); // Output: Sono Luca Verdi. La mia matricola è 12345.
?>
