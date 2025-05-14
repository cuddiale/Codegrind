<!-- Creare una classe "Forma" con il metodo "calcolaArea()" che restituisce l'area della forma. Creare una classe "Rettangolo" che eredita dalla classe "Forma" e ha le proprietà "base" e "altezza". Ridefinire il metodo "calcolaArea()" per calcolare l'area del rettangolo. -->

<?php
class Forma {
    public function calcolaArea() {
        return 0;
    }
}

class Rettangolo extends Forma {
    private $base;
    private $altezza;

    public function __construct($base, $altezza) {
        $this->base = $base;
        $this->altezza = $altezza;
    }

    public function calcolaArea() {
        return $this->base * $this->altezza;
    }
}

$forma = new Forma();
echo $forma->calcolaArea(); // Output: 0

$rettangolo = new Rettangolo(5, 3);
echo $rettangolo->calcolaArea(); // Output: 15
?>