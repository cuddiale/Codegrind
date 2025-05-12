<!-- Scrivere un programma PHP che stampa la tabella dei quadrati dei numeri da 1 a 10. -->

<?php
for ($i = 1; $i <= 10; $i++) {
    $square = $i * $i;
    echo $i . " * " . $i . " = " . $square . "<br>";
}
?>