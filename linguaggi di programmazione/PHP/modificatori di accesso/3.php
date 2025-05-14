<!-- Dichiarare una classe "Libro" con una proprietà "titolo" accessibile solo dalla classe stessa. -->

<?php
class Libro {
    private $titolo;

    public function setTitolo($titolo) {
        $this->titolo = $titolo;
    }

    public function getTitolo() {
        return $this->titolo;
    }
}

$libro = new Libro();
$libro->setTitolo("Il signore degli anelli");
echo "Titolo: " . $libro->getTitolo();
?>
