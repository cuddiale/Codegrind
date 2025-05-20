<!-- Utilizzare una regex per estrarre tutti i numeri da una stringa. -->

<?php
$stringa = "Il prezzo è 123.45 e il codice è 67890";
$pattern = "/\d+/";

preg_match_all($pattern, $stringa, $matches);
print_r($matches[0]); // Array ( [0] => 123 [1] => 45 [2] => 67890 )
?>