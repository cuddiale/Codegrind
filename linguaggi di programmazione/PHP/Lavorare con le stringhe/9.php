<!-- Scrivi un codice PHP che verifica se una stringa è vuota o contiene solo spazi bianchi. -->

<?php

$stringa = "   ";
if (empty(trim($stringa))) {
    echo "La stringa è vuota o contiene solo spazi bianchi.";
} else {
    echo "La stringa non è vuota.";
}

?>