<!-- Dichiarare una classe "Persona" con una proprietà "nome" accessibile solo dalla classe stessa. -->

<?php
class Persona {
    private $nome;

    public function setNome($nome) {
        $this->nome = $nome;
    }

    public function getNome() {
        return $this->nome;
    }
}

$persona = new Persona();
$persona->setNome("Mario");
echo "Nome: " . $persona->getNome();
?>