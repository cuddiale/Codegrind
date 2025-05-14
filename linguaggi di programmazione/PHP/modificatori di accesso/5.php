<!-- Dichiarare una classe "Prodotto" con una proprietà "prezzo" accessibile solo dalla classe stessa. -->

<?php
class Prodotto {
    private $prezzo;

    public function setPrezzo($prezzo) {
        $this->prezzo = $prezzo;
    }

    public function getPrezzo() {
        return $this->prezzo;
    }
}

$prodotto = new Prodotto();
$prodotto->setPrezzo(50);
echo "Prezzo: " . $prodotto->getPrezzo();
?>
