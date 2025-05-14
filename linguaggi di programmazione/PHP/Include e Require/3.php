<!-- Mostrare la differenza tra `include` e `require` quando il file da includere non esiste. -->

<?php
include 'non_esiste.php';
echo "Questo sarà visualizzato anche se include fallisce.";

require 'non_esiste.php';
echo "Questo non sarà visualizzato se require fallisce.";
?>