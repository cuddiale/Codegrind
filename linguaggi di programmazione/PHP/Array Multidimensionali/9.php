<!-- Scrivere un programma PHP che dichiara una matrice multidimensionale di studenti (classe => [matricola => nome]) e stampa i nomi degli studenti per ogni classe. -->

<?php
$students = [
    "Classe A" => [
        "001" => "Mario",
        "002" => "Luca"
    ],
    "Classe B" => [
        "003" => "Giulia",
        "004" => "Sara"
    ]
];

foreach ($students as $class => $members) {
    echo "Classe: " . $class . "<br>";
    foreach ($members as $id => $name) {
        echo "Matricola: " . $id . ", Nome: " . $name . "<br>";
    }
    echo "<br>";
}
?>