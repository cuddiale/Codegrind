<!-- Scrivere un programma PHP che dichiara un array associativo di voti degli studenti (nome => voto) e calcola la media dei voti. -->

<?php
$grades = [
    "Mario" => 80,
    "Luca" => 90,
    "Giulia" => 95,
    "Sara" => 87
];

$total = 0;
$count = 0;

foreach ($grades as $student => $grade) {
    $total += $grade;
    $count++;
}

$average = $total / $count;

echo "La media dei voti è: " . $average;
?>
