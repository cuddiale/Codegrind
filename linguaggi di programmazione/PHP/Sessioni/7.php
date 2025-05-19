<!-- Scrivi un codice PHP per contare quante volte un utente ha visitato una pagina utilizzando una variabile di sessione. -->

<?php
if (isset($_SESSION['visite'])) {
    $_SESSION['visite']++;
} else {
    $_SESSION['visite'] = 1;
}
echo "Hai visitato questa pagina {$_SESSION['visite']} volte.";
?>