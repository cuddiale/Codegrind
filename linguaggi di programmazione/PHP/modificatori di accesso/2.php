<!-- Dichiarare una classe "Automobile" con una proprietà "marca" accessibile solo dalla classe stessa. -->

<?php
class Automobile {
    private $marca;

    public function setMarca($marca) {
        $this->marca = $marca;
    }

    public function getMarca() {
        return $this->marca;
    }
}

$automobile = new Automobile();
$automobile->setMarca("Ford");
echo "Marca: " . $automobile->getMarca();
?>