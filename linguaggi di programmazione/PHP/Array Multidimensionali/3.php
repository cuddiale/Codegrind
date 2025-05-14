<!-- Scrivere un programma PHP che dichiara una matrice multidimensionale di dati personali (nome, cognome, età) e stampa i dati di ogni persona. -->

<?php
$people = [
    ["Mario", "Rossi", 30],
    ["Luca", "Bianchi", 25],
    ["Giulia", "Verdi", 35]
];

foreach ($people as $person) {
    echo "Nome: " . $person[0] . ", Cognome: " . $person[1] . ", Età: " . $person[2] . "<br>";
}
?>