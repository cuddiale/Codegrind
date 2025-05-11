<!-- Scrivere un programma PHP che verifica se un numero non è compreso tra 1 e 10. -->

<?php
$numero = 15;
$result = !($numero >= 1 && $numero <= 10);
echo $result ? "Il numero non è compreso tra 1 e 10." : "Il numero è compreso tra 1 e 10.";
?>