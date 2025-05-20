<!-- Scrivi un codice PHP per ottenere la differenza di giorni tra due date. -->

<?php
$data1 = new DateTime('2023-05-25');
$data2 = new DateTime('2023-06-02');
$differenza = $data1->diff($data2)->days;
echo $differenza; // Output: differenza di giorni tra le due date
?>
