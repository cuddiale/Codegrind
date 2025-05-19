<!-- Scrivi un codice PHP per impostare un cookie con scadenza di 7 giorni. -->

<?php
$expire = time() + (7 * 86400); // 7 giorni
setcookie('preferenza', 'valore', $expire);
?>
