<!-- Scrivere un programma PHP per confrontare se $numero1 è minore di $numero2 (entrambi come float) e stampare il risultato del confronto. -->

<?php
$numero1 = 3.14;
$numero2 = 3.1415;
$result = ($numero1 < $numero2);
echo $result ? "Il primo numero è minore del secondo." : "Il primo numero non è minore del secondo.";
?>