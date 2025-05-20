<!-- Scrivi un codice PHP per ottenere le informazioni su un file, come la dimensione e la data di modifica. -->

<?php
$nomeFile = 'testo.txt';
$informazioniFile = stat($nomeFile);
$dimensione = $informazioniFile['size'];
$dataModifica = date('Y-m-d H:i:s', $informazioniFile['mtime']);
echo "Dimensione del file: $dimensione byte<br>";
echo "Ultima modifica: $dataModifica";
?>