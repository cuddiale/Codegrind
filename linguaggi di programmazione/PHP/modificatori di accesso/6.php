<!-- Dichiarare una classe "Animale" con una proprietà "specie" accessibile solo dalla classe stessa. -->

<?php
class Animale {
    private $specie;

    public function setSpecie($specie) {
        $this->specie = $specie;
    }

    public function getSpecie() {
        return $this->specie;
    }
}

$animale = new Animale();
$animale->setSpecie("Cane");
echo "Specie: " . $animale->getSpecie();
?>