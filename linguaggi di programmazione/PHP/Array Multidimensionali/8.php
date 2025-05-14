<!-- Scrivere un programma PHP che dichiara una matrice multidimensionale di prodotti (categoria => [codice => nome]) e stampa i nomi dei prodotti in ogni categoria. -->

<?php
$products = [
    "Elettronica" => [
        "P01" => "Smartphone",
        "P02" => "Computer",
        "P03" => "TV"
    ],
    "Abbigliamento" => [
        "P04" => "Maglietta",
        "P05" => "Pantaloni",
        "P06" => "Scarpe"
    ],
    "Giochi" => [
        "P07" => "Puzzle",
        "P08" => "Lego",
        "P09" => "Gioco da tavolo"
    ]
];

foreach ($products as $category => $items) {
    echo "Categoria: " . $category . "<br>";
    foreach ($items as $code => $name) {
        echo "Codice: " . $code . ", Nome: " . $name . "<br>";
    }
    echo "<br>";
}
?>