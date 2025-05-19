<!-- Scrivi un codice PHP per impostare un cookie con accesso solo tramite HTTP (non JavaScript). -->

<?php
$expire = time() + 86400; // 1 giorno
setcookie('preferenza', 'valore', $expire, '/', '', false, true);
?>
