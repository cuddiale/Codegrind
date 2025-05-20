<!-- Utilizzare cURL per fare una richiesta POST inviando dati in formato JSON. -->

<?php
$data = array(
    "name" => "Mario",
    "email" => "mario@example.com"
);

$ch = curl_init();

curl_setopt($ch, CURLOPT_URL, "https://jsonplaceholder.typicode.com/posts");
curl_setopt($ch, CURLOPT_POST, true);
curl_setopt($ch, CURLOPT_POSTFIELDS, json_encode($data));
curl_setopt($ch, CURLOPT_HTTPHEADER, array('Content-Type:application/json'));
curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);

$response = curl_exec($ch);
curl_close($ch);

echo $response; // Output: JSON response with the created post
?>