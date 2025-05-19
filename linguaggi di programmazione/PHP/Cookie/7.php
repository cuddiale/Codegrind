<!-- Scrivi un codice PHP per impostare un cookie con dominio specifico. -->

<?php
$expire = time() + 86400; // 1 giorno
setcookie('preferenza', 'valore', $expire, '/', 'esempio.com');
?>