<!-- Creare una classe "Figura" con il metodo "calcolaPerimetro()" che restituisce il perimetro della figura. Creare una classe "Quadrato" che eredita dalla classe "Figura" e ha la proprietà "lato". Ridefinire il metodo "calcolaPerimetro()" per calcolare il perimetro del quadrato. -->

<?php
class Figura {
    public function calcolaPerimetro() {
        return 0;
    }
}

class Quadrato extends Figura {
    private $lato;

    public function __construct($lato) {
        $this->lato = $lato;
    }

    public function calcolaPerimetro() {
        return 4 * $this->lato;
    }
}

$figura = new Figura();
echo $figura->calcolaPerimetro(); // Output: 0

$quadrato = new Quadrato(5);
echo $quadrato->calcolaPerimetro(); // Output: 20
?>