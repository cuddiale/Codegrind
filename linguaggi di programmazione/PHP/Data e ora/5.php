<!-- Scrivi un codice PHP per ottenere il giorno della settimana corrente. -->

<?php
$oggi = new DateTime();
$giornoSettimana = $oggi->format('N');
echo $giornoSettimana; // Output: numero del giorno della settimana (1 per lunedì, 2 per martedì, ecc.)
?>