<!-- Scrivere un programma PHP che verifica se una stringa non contiene la lettera "x". -->

<?php
$stringa = "casa";
$result = (strpos($stringa, "x") === false);
echo $result ? "La stringa non contiene la lettera 'x'." : "La stringa contiene la lettera 'x'.";
?>