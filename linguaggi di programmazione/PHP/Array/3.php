<!-- Scrivere un programma PHP che dichiara un array indicizzato misto di numeri e stringhe e lo stampa -->

<?php
$mix = [1, "Due", 3, "Quattro"];

for ($i = 0; $i < count($mix); $i++) {
    echo $mix[$i] . " ";
}
?>