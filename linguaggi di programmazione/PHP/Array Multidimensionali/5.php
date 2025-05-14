<!-- Scrivere un programma PHP che dichiara una matrice multidimensionale di prodotti (categoria => [nome, prezzo]) e stampa i prodotti in ogni categoria. -->

<?php
$products = [
    "Elettronica" => [
        ["Smartphone", 500],
        ["Computer", 1000],
        ["TV", 800]
    ],
    "Abbigliamento" => [
        ["Maglietta", 20],
        ["Pantaloni", 40],
        ["Scarpe", 60]
    ],
    "Giochi" => [
        ["Puzzle", 10],
        ["Lego", 30],
        ["Gioco da tavolo", 25]
    ]
];

foreach ($products as $category => $items) {
    echo "Categoria: " . $category . "<br>";
    foreach ($items as $item) {
        echo "Nome: " . $item[0] . ", Prezzo: " . $item[1] . "<br>";
    }
    echo "<br>";
}
?>
