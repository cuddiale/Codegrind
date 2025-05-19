<!-- Scrivi un codice PHP per contare quante volte un utente ha visitato una pagina utilizzando un cookie. -->

<?php
$visite = 1;
if (isset($_COOKIE['visite'])) {
    $visite = $_COOKIE['visite'] + 1;
}
setcookie('visite', $visite, time() + 86400); // 1 giorno
echo "Hai visitato questa pagina $visite volte.";
?>
