<!-- Scrivere un programma PHP che dichiara un array associativo di studenti (matricola => nome) e stampa i nomi degli studenti in ordine alfabetico utilizzando la funzione "ksort". -->

<?php
$students = [
    "002" => "Luca",
    "001" => "Mario",
    "004" => "Sara",
    "003" => "Giulia"
];

ksort($students);

foreach ($students as $key => $name) {
    echo "Matricola: " . $key . ", Nome: " . $name . "<br>";
}
?>
