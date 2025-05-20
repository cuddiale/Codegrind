<!-- Utilizzare cURL per fare una richiesta GET e gestire eventuali errori. -->

<?php
$ch = curl_init();

curl_setopt($ch, CURLOPT_URL, "https://api.example.com/data");
curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);

$response = curl_exec($ch);

if(curl_errno($ch)) {
    echo 'Errore cURL: ' . curl_error($ch);
} else {
    echo $response; // Output: Response from the API
}

curl_close($ch);
?>