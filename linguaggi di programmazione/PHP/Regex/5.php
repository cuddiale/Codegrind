<!-- Utilizzare una regex per verificare se una stringa è una password complessa. -->

<?php
$password = "Passw0rd!";
$pattern = "/^(?=.*[A-Z])(?=.*[a-z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$/";

if (preg_match($pattern, $password)) {
    echo "Password complessa valida";
} else {
    echo "Password non valida";
}
?>