<?php
require 'Namespaces.php';

use PrimoNamespace\PrimaClasse;
use SecondoNamespace\SecondaClasse;

$prima = new PrimaClasse();
$prima->messaggio(); // Output: Ciao dal PrimoNamespace!

$seconda = new SecondaClasse();
$seconda->messaggio(); // Output: Ciao dal SecondoNamespace!
?>