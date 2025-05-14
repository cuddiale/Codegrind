<!-- Scrivere una classe PHP chiamata "Prodotto" che ha tre proprietà: "codice", "nome" e "prezzo". Aggiungere un metodo per ottenere una descrizione del prodotto. -->

<?php
class Prodotto {
    public $codice;
    public $nome;
    public $prezzo;

    public function getDescrizione() {
        return "Codice: " . $this->codice . ", Nome: " . $this->nome . ", Prezzo: " . $this->prezzo;
    }
}

$prodotto = new Prodotto();
$prodotto->codice = "P01";
$prodotto->nome = "Smartphone";
$prodotto->prezzo = 500;

echo "Descrizione: " . $prodotto->getDescrizione();
?>
