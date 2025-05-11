<!-- Scrivere un programma PHP per confrontare se due numeri interi non sono uguali (con `<>`) e stampare il risultato del confronto. -->

<?php
$numero1 = 5;
$numero2 = 8;
$result = ($numero1 <> $numero2);
echo $result ? "I numeri sono diversi." : "I numeri sono uguali.";
?>
