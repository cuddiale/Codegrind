<!-- Configurare PHP per visualizzare tutti gli errori e i warning. -->

<?php
ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);

echo $variabileNonDefinita; // Output: Warning: Undefined variable $variabileNonDefinita
?>