<!-- Utilizzare un trait con una proprietà. -->

<?php
trait Contatore {
    public $contatore = 0;

    public function incrementa() {
        $this->contatore++;
    }
}

class Oggetto {
    use Contatore;
}

$obj = new Oggetto();
$obj->incrementa();
$obj->incrementa();
echo $obj->contatore; // Output: 2
?>