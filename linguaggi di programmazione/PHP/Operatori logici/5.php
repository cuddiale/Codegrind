<!-- Scrivere un programma PHP che verifica se una stringa inizia con la lettera "P" o termina con la lettera "o". -->

<?php
$stringa = "Pizza";
$result = (strpos($stringa, "P") === 0 || substr($stringa, -1) === "o");
echo $result ? "La stringa inizia con la lettera 'P' o termina con la lettera 'o'." : "La stringa non inizia con la lettera 'P' né termina con la lettera 'o'.";
?>