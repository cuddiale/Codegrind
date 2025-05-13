<!-- Scrivere un programma PHP che dichiara un array associativo di mesi dell'anno (numero => nome) e stampa i mesi in ordine crescente utilizzando la funzione "asort". -->

<?php
$months = [
    1 => "Gennaio",
    4 => "Aprile",
    2 => "Febbraio",
    3 => "Marzo"
];

asort($months);

foreach ($months as $number => $name) {
    echo "Numero: " . $number . ", Mese: " . $name . "<br>";
}
?>
