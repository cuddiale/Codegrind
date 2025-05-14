<!-- Scrivere una classe PHP chiamata "Studente" che ha tre proprietà: "matricola", "nome" e "cognome". Aggiungere un metodo per ottenere il nome completo dello studente. -->

<?php
class Studente {
    public $matricola;
    public $nome;
    public $cognome;

    public function getNomeCompleto() {
        return $this->nome . " " . $this->cognome;
    }
}

$studente = new Studente();
$studente->matricola = "001";
$studente->nome = "Mario";
$studente->cognome = "Rossi";

echo "Nome completo dello studente: " . $studente->getNomeCompleto();
?>