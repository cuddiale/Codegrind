<!-- Scrivere un programma PHP per confrontare due stringhe sono uguali e stampare il risultato del confronto. -->

<?php
$stringa1 = "Ciao";
$stringa2 = "ciao";
$result = ($stringa1 == $stringa2);
echo $result ? "Le stringhe sono uguali." : "Le stringhe sono diverse.";
?>