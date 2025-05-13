<!-- Scrivere un programma PHP che dichiara un array indicizzato di stringhe e stampa gli elementi in ordine inverso utilizzando un ciclo "for". -->

<?php
$fruits = ["Mela", "Banana", "Arancia", "Kiwi"];

for ($i = count($fruits) - 1; $i >= 0; $i--) {
    echo $fruits[$i] . " ";
}
?>