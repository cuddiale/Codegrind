<!-- Scrivere un programma PHP che dichiara una matrice multidimensionale di voti degli studenti (nome => voto) e calcola la media dei voti per ogni studente. -->

<?php
$grades = [
    ["Mario", 80, 85, 90],
    ["Luca", 90, 95, 92],
    ["Giulia", 95, 92, 98]
];

foreach ($grades as $student) {
    $name = $student[0];
    $total = array_sum(array_slice($student, 1));
    $count = count($student) - 1;
    $average = $total / $count;

    echo "Studente: " . $name . ", Media voti: " . $average . "<br>";
}
?>