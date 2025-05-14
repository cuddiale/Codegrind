<!-- Creare una classe "Veicolo" con le proprietà "marca" e "anno" e i metodi "getMarca()" e "getAnno()" per ottenere le informazioni del veicolo. Creare una classe "Automobile" che eredita dalla classe "Veicolo" e ha una proprietà aggiuntiva "modello". -->

<?php
class Veicolo {
    protected $marca;
    protected $anno;

    public function __construct($marca, $anno) {
        $this->marca = $marca;
        $this->anno = $anno;
    }

    public function getMarca() {
        return $this->marca;
    }

    public function getAnno() {
        return $this->anno;
    }
}

class Automobile extends Veicolo {
    private $modello;

    public function __construct($marca, $anno, $modello) {
        parent::__construct($marca, $anno);
        $this->modello = $modello;
    }

    public function getModello() {
        return $this->modello;
    }
}

$auto = new Automobile("Fiat", 2020, "Panda");
echo $auto->getMarca(); // Output: Fiat
echo $auto->getAnno(); // Output: 2020
echo $auto->getModello(); // Output: Panda
?>
