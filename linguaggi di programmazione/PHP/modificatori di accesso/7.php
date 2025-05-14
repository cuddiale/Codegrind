<!-- Dichiarare una classe "Computer" con una proprietà "marca" accessibile solo dalla classe stessa. -->

<?php
class Computer {
    private $marca;

    public function setMarca($marca) {
        $this->marca = $marca;
    }

    public function getMarca() {
        return $this->marca;
    }
}

$computer = new Computer();
$computer->setMarca("HP");
echo "Marca: " . $computer->getMarca();
?>