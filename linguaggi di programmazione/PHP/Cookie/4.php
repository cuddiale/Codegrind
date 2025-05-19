<!-- Scrivi un codice PHP per eliminare un cookie. -->

<?php
setcookie('username', '', time() - 3600);
?>