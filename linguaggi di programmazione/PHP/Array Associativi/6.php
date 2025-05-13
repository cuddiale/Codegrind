<!-- Scrivere un programma PHP che dichiara un array associativo di studenti (matricola => nome) e cerca uno studente specifico utilizzando la funzione "array_search". -->

<?php
$students = [
    "001" => "Mario",
    "002" => "Luca",
    "003" => "Giulia",
    "004" => "Sara"
];

$searchStudent = "Luca";
$key = array_search($searchStudent, $students);

if ($key !== false) {
    echo "Lo studente con nome " . $searchStudent . " ha la matricola: " . $key;
} else {
    echo "Lo studente " . $searchStudent . " non è presente nell'elenco.";
}
?>