<!-- Scrivere una classe PHP chiamata "Animale" che ha due proprietà: "nome" e "specie". Aggiungere un metodo per ottenere una descrizione dell'animale. -->

<?php
class Animale {
    public $nome;
    public $specie;

    public function getDescrizione() {
        return "Nome: " . $this->nome . ", Specie: " . $this->specie;
    }
}

$animale = new Animale();
$animale->nome = "Fido";
$animale->specie = "Cane";

echo "Descrizione dell'animale: " . $animale->getDescrizione();
?>
