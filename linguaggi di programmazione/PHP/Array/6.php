<!-- Scrivere un programma PHP che dichiara un array indicizzato di stringhe e verifica se un elemento specifico è presente utilizzando un ciclo "for". -->

<?php
$fruits = ["Mela", "Banana", "Arancia", "Kiwi"];
$searchItem = "Banana";
$found = false;

for ($i = 0; $i < count($fruits); $i++) {
    if ($fruits[$i] == $searchItem) {
        $found = true;
        break;
    }
}

if ($found) {
    echo $searchItem . " è presente nell'array.";
} else {
    echo $searchItem . " non è presente nell'array.";
}
?>