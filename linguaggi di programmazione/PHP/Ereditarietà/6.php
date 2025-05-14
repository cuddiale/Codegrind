<!-- Creare una classe "Prodotto" con le proprietà "nome" e "prezzo" e il metodo "visualizza()" che stampa le informazioni del prodotto. Creare una classe "Libro" che eredita dalla classe "Prodotto" e ha una proprietà aggiuntiva "autore". Ridefinire il metodo "visualizza()" per visualizzare anche l'autore del libro. -->

<?php
class Prodotto {
    protected $nome;
    protected $prezzo;

    public function __construct($nome, $prezzo) {
        $this->nome = $nome;
        $this->prezzo = $prezzo;
    }

    public function visualizza() {
        echo "Nome: {$this->nome}<br>";
        echo "Prezzo: {$this->prezzo}€<br>";
    }
}

class Libro extends Prodotto {
    private $autore;

    public function __construct($nome, $prezzo, $autore) {
        parent::__construct($nome, $prezzo);
        $this->autore = $autore;
    }

    public function visualizza() {
        parent::visualizza();
        echo "Autore: {$this->autore}<br>";
    }
}

$prodotto = new Prodotto("Prodotto generico", 10);
$prodotto->visualizza(); // Output: Nome: Prodotto generico, Prezzo: 10€

$libro = new Libro("Titolo libro", 20, "Autore libro");
$libro->visualizza(); // Output: Nome: Titolo libro, Prezzo: 20€, Autore: Autore libro
?>