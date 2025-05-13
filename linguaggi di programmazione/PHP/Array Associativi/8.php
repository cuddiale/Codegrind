<!-- Scrivere un programma PHP che dichiara un array associativo di prodotti (codice => quantità) e aggiorna la quantità di un prodotto specifico utilizzando l'operatore di assegnazione. -->

<?php
$products = [
    "P01" => 10,
    "P02" => 5,
    "P03" => 20
];

$productCode = "P02";
$newQuantity = 8;

$products[$productCode] = $newQuantity;

foreach ($products as $code => $quantity) {
    echo "Codice prodotto: " . $code . ", Quantità: " . $quantity . "<br>";
}
?>