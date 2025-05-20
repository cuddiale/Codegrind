<!-- Utilizzare cURL per scaricare un file da un URL e salvarlo localmente. -->

<?php
$url = "https://www.example.com/file.zip";
$destinazione = "file.zip";

$ch = curl_init($url);
$fp = fopen($destinazione, 'w+');

curl_setopt($ch, CURLOPT_FILE, $fp);
curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true);

curl_exec($ch);
curl_close($ch);
fclose($fp);

echo "File scaricato con successo!";
?>