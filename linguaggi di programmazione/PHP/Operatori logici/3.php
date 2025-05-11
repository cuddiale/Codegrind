<!-- Scrivere un programma PHP che verifica se un numero è pari e positivo. -->

<?php
$numero = 6;
$result = ($numero % 2 == 0 && $numero > 0);
echo $result ? "Il numero è pari e positivo." : "Il numero non è pari e positivo.";
?>