<!-- Scrivere un programma PHP che verifica se una stringa contiene la lettera "a" e la lettera "b". -->

<?php
$stringa = "casa";
$result = (strpos($stringa, "a") !== false && strpos($stringa, "b") !== false);
echo $result ? "La stringa contiene sia la lettera 'a' che la lettera 'b'." : "La stringa non contiene sia la lettera 'a' che la lettera 'b'.";
?>
