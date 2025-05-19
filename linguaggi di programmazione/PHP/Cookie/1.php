<!-- Scrivi un codice PHP per impostare un cookie con il nome "username" e il valore "mario". -->

<?php
$expire = time() + 86400; // 1 giorno
setcookie('username', 'mario', $expire);
?>