<!-- Scrivi un codice PHP per impostare un cookie con HTTPS abilitato. -->

<?php
$expire = time() + 86400; // 1 giorno
setcookie('preferenza', 'valore', $expire, '/', '', true, true);
?>