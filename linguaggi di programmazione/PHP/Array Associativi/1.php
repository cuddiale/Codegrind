<!-- Scrivere un programma PHP che dichiara un array associativo di dati personali (nome, cognome, età) e lo stampa. -->

<?php
$person = [
    "nome" => "Mario",
    "cognome" => "Rossi",
    "età" => 30
];

foreach ($person as $key => $value) {
    echo $key . ": " . $value . "<br>";
}
?>