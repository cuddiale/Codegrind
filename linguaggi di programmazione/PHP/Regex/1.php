<!-- Utilizzare una regex per verificare se una stringa è un indirizzo email valido. -->

<?php
$email = "test@example.com";
$pattern = "/^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/";

if (preg_match($pattern, $email)) {
    echo "Indirizzo email valido";
} else {
    echo "Indirizzo email non valido";
}
?>