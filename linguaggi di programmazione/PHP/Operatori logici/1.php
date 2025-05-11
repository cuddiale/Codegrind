<!-- Scrivere un programma PHP che verifica se un numero intero è compreso tra 10 e 20. -->

<?php
$numero = 15;
$result = ($numero >= 10 && $numero <= 20);
echo $result ? "Il numero è compreso tra 10 e 20." : "Il numero non è compreso tra 10 e 20.";
?>
