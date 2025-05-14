<!-- Scrivere una classe PHP chiamata "Veicolo" che ha due proprietà: "marca" e "anno". Aggiungere un metodo per ottenere i dettagli del veicolo. -->

<?php
class Veicolo {
    public $marca;
    public $anno;

    public function getDettagli() {
        return "Marca: " . $this->marca . ", Anno: " . $this->anno;
    }
}

$veicolo = new Veicolo();
$veicolo->marca = "Fiat";
$veicolo->anno = 2015;

echo "Dettagli: " . $veicolo->getDettagli();
?>
