<!-- Scrivere un programma PHP per confrontare se due numeri float sono uno minore uguale dell'altro e stampare il risultato del confronto. -->

<?php
$numero1 = 3.14;
$numero2 = 3.1415;
$result = ($numero1 <= $numero2);
echo $result ? "Il primo numero è minore o uguale al secondo." : "Il primo numero non è minore o uguale al secondo.";
?>