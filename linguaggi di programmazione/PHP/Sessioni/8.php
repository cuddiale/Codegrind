<!-- Scrivi un codice PHP per impostare un timeout di sessione di 30 minuti. -->

<?php
ini_set('session.gc_maxlifetime', 1800); // 30 minuti
session_set_cookie_params(1800);
session_start();
?>
