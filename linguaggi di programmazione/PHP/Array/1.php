<!-- Scrivere un programma PHP che dichiara un array indicizzato di numeri interi e lo stampa. -->

<?php
$numbers = [1, 2, 3, 4, 5];

for ($i = 0; $i < count($numbers); $i++) {
    echo $numbers[$i] . " ";
}
?>
