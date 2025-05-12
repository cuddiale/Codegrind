<!-- Scrivere un programma PHP che stampa le chiavi e i valori di un array associativo. -->

<?php
$student = [
    "nome" => "Mario",
    "cognome" => "Rossi",
    "età" => 25,
    "voto" => 8.5
];

foreach ($student as $key => $value) {
    echo $key . ": " . $value . "<br>";
}
?>