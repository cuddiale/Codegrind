<!-- Utilizzare una regex per verificare se una stringa è un numero di telefono valido. -->

<?php
$telefono = "+39 123 456 7890";
$pattern = "/^\+?\d{1,4}?\s?\d{3}\s?\d{3}\s?\d{4}$/";

if (preg_match($pattern, $telefono)) {
    echo "Numero di telefono valido";
} else {
    echo "Numero di telefono non valido";
}
?>