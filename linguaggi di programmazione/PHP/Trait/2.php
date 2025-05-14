<!-- Creare un trait con un metodo privato e utilizzarlo in una classe. -->

<?php
trait Calcoli {
    private function quadrato($n) {
        return $n * $n;
    }

    public function stampaQuadrato($n) {
        echo $this->quadrato($n);
    }
}

class Matematica {
    use Calcoli;
}

$math = new Matematica();
$math->stampaQuadrato(4); // Output: 16
?>