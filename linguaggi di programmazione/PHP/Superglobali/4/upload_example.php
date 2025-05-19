<?php
if ($_FILES) {
    $fileName = $_FILES['fileToUpload']['name'];
    $fileSize = $_FILES['fileToUpload']['size'];
    $fileTmp = $_FILES['fileToUpload']['tmp_name'];

    echo "Nome del file: " . $fileName . "<br>";
    echo "Dimensione del file: " . $fileSize . " bytes<br>";
    echo "Percorso temporaneo: " . $fileTmp . "<br>";
}
?>