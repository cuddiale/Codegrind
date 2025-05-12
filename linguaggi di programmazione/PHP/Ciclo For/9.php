<!-- Scrivere un programma PHP che stampa i caratteri ASCII da 65 a 90 (lettere maiuscole). -->

<?php
for ($i = 65; $i <= 90; $i++) {
    echo chr($i) . " ";
}
?>