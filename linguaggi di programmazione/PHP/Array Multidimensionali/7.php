<!-- Scrivere un programma PHP che dichiara una matrice multidimensionale di studenti (matricola => [nome, cognome]) e cerca lo studente con una matricola specifica. -->

<?php
$students = [
    "001" => ["Mario", "Rossi"],
    "002" => ["Luca", "Bianchi"],
    "003" => ["Giulia", "Verdi"]
];

$searchID = "002";

if (array_key_exists($searchID, $students)) {
    $student = $students[$searchID];
    echo "Matricola: " . $searchID . ", Nome: " . $student[0] . ", Cognome: " . $student[1];
} else {
    echo "Studente con matricola " . $searchID . " non trovato.";
}
?>