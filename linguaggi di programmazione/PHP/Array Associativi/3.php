<!-- Scrivere un programma PHP che dichiara un array associativo di prodotti (nome => prezzo) e stampa i prodotti con un prezzo superiore a 50 euro. -->

<?php
$products = [
    "Telefono" => 200,
    "Computer" => 800,
    "TV" => 600,
    "Orologio" => 100
];

foreach ($products as $product => $price) {
    if ($price > 50) {
        echo $product . ": " . $price . " euro<br>";
    }
}
?>