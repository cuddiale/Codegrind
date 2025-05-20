<?php
require 'MyNamespace.php';

use MyNamespace\Saluto as SalutoAlias;

$saluto = new SalutoAlias();
$saluto->diCiao(); // Output: Ciao dal namespace MyNamespace!
?>