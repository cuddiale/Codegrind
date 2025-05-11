<!-- Scrivere un programma PHP che verifica se un numero è dispari o negativo. -->

<?php
$numero = -7;
$result = ($numero % 2 != 0 || $numero < 0);
echo $result ? "Il numero è dispari o negativo." : "Il numero non è né dispari né negativo.";
?>