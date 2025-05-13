<!-- Scrivere un programma PHP che dichiara un array indicizzato di stringhe e trova la lunghezza di ciascun elemento utilizzando la funzione "strlen". -->

<?php
$words = ["Ciao", "Mondo", "PHP", "Array"];

for ($i = 0; $i < count($words); $i++) {
    echo "La lunghezza di " . $words[$i] . " è: " . strlen($words[$i]) . "<br>";
}
?>