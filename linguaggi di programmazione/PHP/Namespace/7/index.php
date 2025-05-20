<?php
require 'NestedNamespace.php';

use PadreNamespace\FiglioNamespace\Saluto;

$saluto = new Saluto();
$saluto->diCiao(); // Output: Ciao dal namespace FiglioNamespace!
?>