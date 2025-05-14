<!-- Creare un'interfaccia "FormaGeometrica" con un metodo "calcolaArea()". Creare una classe "Quadrato" che implementa l'interfaccia e implementa il metodo "calcolaArea()" per calcolare l'area del quadrato. -->

<?php
interface FormaGeometrica {
    public function calcolaArea();
}

class Quadrato implements FormaGeometrica {
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
