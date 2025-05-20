
<!-- Utilizzare cURL per fare una richiesta GET a un'API e stampare la risposta. -->

<?php
$ch = curl_init();

curl_setopt($ch, CURLOPT_URL, "https://api.chucknorris.io/jokes/random");
curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);

$response = curl_exec($ch);
curl_close($ch);

echo $response; // Output: JSON response with a Chuck Norris joke
?>