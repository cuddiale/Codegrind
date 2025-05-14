<!-- Creare un'interfaccia "Pagabile" con un metodo "calcolaTotale()". Creare una classe "Ordine" che implementa l'interfaccia e implementa il metodo "calcolaTotale()" per calcolare il totale dell'ordine. -->

<?php
interface Pagabile {
    public function calcolaTotale();
}

class Ordine implements Pagabile {
    private $prodotti;

    public function __construct($prodotti) {
        $this->prodotti = $prodotti;
    }

    public function calcolaTotale() {
        // Calcolo del totale dell'ordine
    }
}

$prodotti = array(/* ... */);
$ordine = new Ordine($prodotti);
echo "Totale dell'ordine: " . $ordine->calcolaTotale();
?>