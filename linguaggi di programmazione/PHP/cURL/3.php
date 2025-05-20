<!-- Utilizzare cURL per fare una richiesta GET con headers personalizzati. -->

<?php
$ch = curl_init();

$headers = [
    'Content-Type: application/json',
    'Authorization: Bearer YOUR_ACCESS_TOKEN'
];

curl_setopt($ch, CURLOPT_URL, "https://api.example.com/data");
curl_setopt($ch, CURLOPT_HTTPHEADER, $headers);
curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);

$response = curl_exec($ch);
curl_close($ch);

echo $response; // Output: Response from the API
?>