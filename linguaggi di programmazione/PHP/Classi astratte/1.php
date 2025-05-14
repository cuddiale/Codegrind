<!-- Creare una classe astratta "FiguraGeometrica" con un metodo astratto "calcolaArea()". Creare una classe "Quadrato" che estende la classe astratta e implementa il metodo "calcolaArea()" per calcolare l'area del quadrato. -->

<?php
abstract class FiguraGeometrica {
    abstract public function calcolaArea();
}

class Quadrato extends FiguraGeometrica {
    private $lato;

    public function __construct($lato) {
        $this->lato = $lato;
    }

    public function calcolaArea() {
        return $this->lato * $this->lato;
    }
}

$quadrato = new Quadrato(5);
echo "Area del quadrato: " . $quadrato->calcolaArea();
?>