<!-- Scrivere una classe PHP chiamata "Prodotto" che ha due proprietà: "nome" e "prezzo". Aggiungere un metodo per ottenere una descrizione del prodotto. -->

<?php
class Prodotto {
    public $nome;
    public $prezzo;

    public function getDescrizione() {
        return "Nome: " . $this->nome . ", Prezzo: " . $this->prezzo;
    }
}

$prodotto = new Prodotto();
$prodotto->nome = "Cuffie wireless";
$prodotto->prezzo = 50;

echo "Descrizione del prodotto: " . $prodotto->getDescrizione();
?>
