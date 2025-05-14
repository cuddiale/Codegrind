<!-- Creare una classe astratta "Prodotto" con un metodo astratto "calcolaPrezzo()". Creare una classe "Libro" che estende la classe astratta e implementa il metodo "calcolaPrezzo()" per calcolare il prezzo del libro. -->

<?php
abstract class Prodotto {
    abstract public function calcolaPrezzo();
}

class Libro extends Prodotto {
    private $prezzo;

    public function __construct($prezzo) {
        $this->prezzo = $prezzo;
    }

    public function calcolaPrezzo() {
        return $this->prezzo;
    }
}

$libro = new Libro(20);
echo "Prezzo del libro: " . $libro->calcolaPrezzo();
?>