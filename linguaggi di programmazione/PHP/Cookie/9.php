<!-- Scrivi un codice PHP per ottenere il tempo rimanente di scadenza di un cookie. -->

<?php
if (isset($_COOKIE['preferenza'])) {
    $scadenza = $_COOKIE['preferenza_expire'] - time();
    echo "Il cookie 'preferenza' scadrà tra $scadenza secondi.";
} else {
    echo "Il cookie 'preferenza' non è stato impostato.";
}
?>