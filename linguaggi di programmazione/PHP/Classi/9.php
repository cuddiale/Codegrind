<!-- Scrivere una classe PHP chiamata "Auto" che ha due proprietà: "marca" e "colore". Aggiungere un metodo per ottenere i dettagli dell'auto. -->

<?php
class Auto {
    public $marca;
    public $colore;

    public function getDettagli() {
        return "Marca: " . $this->marca . ", Colore: " . $this->colore;
    }
}

$auto = new Auto();
$auto->marca = "Ford";
$auto->colore = "Blu";

echo "Dettagli dell'auto: " . $auto->getDettagli();
?>
