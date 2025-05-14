<!-- Scrivere una classe PHP chiamata "Film" che ha tre proprietà: "titolo", "regista" e "anno". Aggiungere un metodo per ottenere i dettagli del film. -->

<?php
class Film {
    public $titolo;
    public $regista;
    public $anno;

    public function getDettagli() {
        return "Titolo: " . $this->titolo . ", Regista: " . $this->regista . ", Anno: " . $this->anno;
    }
}

$film = new Film();
$film->titolo = "Inception";
$film->regista = "Christopher Nolan";
$film->anno = 2010;

echo "Dettagli del film: " . $film->getDettagli();
?>