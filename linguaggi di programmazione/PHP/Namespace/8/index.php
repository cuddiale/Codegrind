<?php
spl_autoload_register(function ($class) {
    include str_replace('\\', DIRECTORY_SEPARATOR, $class) . '.php';
});

use Libreria\Saluto\Saluto;

$saluto = new Saluto();
$saluto->diCiao(); // Output: Ciao dal namespace Libreria\Saluto!
?>