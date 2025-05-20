<!-- Utilizzare una regex per estrarre tutti gli indirizzi email da un testo. -->

<?php
$testo = "Contattaci a info@example.com o support@example.org.";
$pattern = "/[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}/";

preg_match_all($pattern, $testo, $matches);
print_r($matches[0]); // Array ( [0] => info@example.com [1] => support@example.org )
?>