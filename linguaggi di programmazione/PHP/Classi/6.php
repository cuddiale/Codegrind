<!-- Scrivere una classe PHP chiamata "Libro" che ha due proprietà: "titolo" e "autore". Aggiungere un metodo per ottenere i dettagli del libro. -->

<?php
class Libro {
    public $titolo;
    public $autore;

    public function getDettagli() {
        return "Titolo: " . $this->titolo . ", Autore: " . $this->autore;
    }
}

$libro = new Libro();
$libro->titolo = "Il signore degli anelli";
$libro->autore = "J.R.R. Tolkien";

echo "Dettagli del libro: " . $libro->getDettagli();
?>
