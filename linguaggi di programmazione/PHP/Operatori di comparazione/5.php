<!-- Scrivere un programma PHP per confrontare se due stringhe sono diverse tra di loro e stampare il risultato del confronto. -->

<?php
$stringa1 = "Ciao";
$stringa2 = "ciao";
$result = ($stringa1 != $stringa2);
echo $result ? "Le stringhe sono diverse." : "Le stringhe sono uguali.";
?>