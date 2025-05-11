<!-- Scrivere un programma PHP per confrontare se $numero1 è maggiore uguale a $numero2 e stampare il risultato del confronto. -->

<?php
$numero1 = 5;
$numero2 = 8;
$result = ($numero1 >= $numero2);
echo $result ? "Il primo numero è maggiore o uguale al secondo." : "Il primo numero non è maggiore o uguale al secondo.";
?>