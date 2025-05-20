<!-- Utilizzare una regex per verificare se una stringa è un codice postale italiano valido. -->

<?php
$cap = "00100";
$pattern = "/^\d{5}$/";

if (preg_match($pattern, $cap)) {
    echo "Codice postale valido";
} else {
    echo "Codice postale non valido";
}
?>