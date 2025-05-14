<!-- Scrivere una classe PHP chiamata "Cerchio" che ha una proprietà "raggio" e due metodi: "calcolaArea" per calcolare l'area del cerchio e "calcolaPerimetro" per calcolare il perimetro del cerchio. -->

<?php
class Cerchio {
    public $raggio;

    public function calcolaArea() {
        return pi() * pow($this->raggio, 2);
    }

    public function calcolaPerimetro() {
        return 2 * pi() * $this->raggio;
    }
}

$cerchio = new Cerchio();
$cerchio->raggio = 5;

echo "Area del cerchio: " . $cerchio->calcolaArea();
echo "Perimetro del cerchio: " . $cerchio->calcolaPerimetro();
?>