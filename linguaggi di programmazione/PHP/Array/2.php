<!-- Scrivere un programma PHP che dichiara un array indicizzato di stringhe e lo stampa. -->

<?php
$fruits = ["Mela", "Banana", "Arancia", "Kiwi"];

for ($i = 0; $i < count($fruits); $i++) {
    echo $fruits[$i] . " ";
}
?>