<!-- Scrivere un programma PHP che stampa i caratteri ASCII da 65 a 90 (lettere maiuscole) utilizzando un ciclo "while". -->

<?php
$i = 65;

while ($i <= 90) {
    echo chr($i) . " ";
    $i++;
}
?>