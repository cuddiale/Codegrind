<!-- Scrivere una classe PHP chiamata "Persona" che ha due proprietà: "nome" e "cognome". Aggiungere un metodo per ottenere il nome completo della persona. -->

<?php
class Persona {
    public $nome;
    public $cognome;

    public function getNomeCompleto() {
        return $this->nome . " " . $this->cognome;
    }
}

$persona = new Persona();
$persona->nome = "Mario";
$persona->cognome = "Rossi";

echo "Nome completo: " . $persona->getNomeCompleto();
?>