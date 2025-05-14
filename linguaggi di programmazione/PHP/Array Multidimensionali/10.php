<!-- Scrivere un programma PHP che dichiara una matrice multidimensionale di negozi (città => [nome => indirizzo]) e stampa gli indirizzi dei negozi in ogni città. -->

<?php
$stores = [
    "Milano" => [
        "Negozio 1" => "Via Roma, 1",
        "Negozio 2" => "Via Verdi, 5"
    ],
    "Roma" => [
        "Negozio 3" => "Via Nazionale, 10",
        "Negozio 4" => "Via Colosseo, 2"
    ]
];

foreach ($stores as $city => $shops) {
    echo "Città: " . $city . "<br>";
    foreach ($shops as $name => $address) {
        echo "Nome negozio: " . $name . ", Indirizzo: " . $address . "<br>";
    }
    echo "<br>";
}
?>
