<?php
require 'MyNamespace.php';

use MyNamespace\Saluto;

$saluto = new Saluto();
$saluto->diCiao(); // Output: Ciao dal namespace MyNamespace!
?>