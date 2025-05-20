<!-- Utilizzare cURL per fare una richiesta GET e ottenere informazioni dettagliate sull'operazione. -->

<?php
$ch = curl_init();

curl_setopt($ch, CURLOPT_URL, "https://api.chucknorris.io/jokes/random");
curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);

$response = curl_exec($ch);

if($response === false) {
    echo 'Errore cURL: ' . curl_error($ch);
} else {
    $info = curl_getinfo($ch);
    echo "Tempo di esecuzione: " . $info['total_time'] . " secondi<br>";
    echo "Dimensione dei dati scaricati: " . $info['size_download'] . " bytes<br>";
    echo "Risposta HTTP: " . $info['http_code'] . "<br>";
    echo "URL finale: " . $info['url'] . "<br>";
}

curl_close($ch);
?>