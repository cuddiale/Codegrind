<?php
require 'InterfaceNamespace.php';

use InterfacciaNamespace\Saluto;

$saluto = new Saluto();
$saluto->diCiao(); // Output: Ciao dal namespace InterfacciaNamespace!
?>