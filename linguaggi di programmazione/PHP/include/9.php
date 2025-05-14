<!-- Crea un file functions.php che contiene diverse funzioni utili. Utilizza l'istruzione include per includere il file functions.php in un file index.php e utilizza le funzioni nel tuo codice. -->

// functions.php
<?php
function saluta($nome) {
    echo "Ciao, $nome!";
}

function somma($a, $b) {
    return $a + $b;
}
?>

// index.php
<?php include 'functions.php'; ?>
<!DOCTYPE html>
<html>
<head>
    <title>Il mio sito web</title>
</head>
<body>
    <h1>Benvenuto</h1>
    <?php saluta('Mario'); ?> <!-- Output: Ciao, Mario! -->
    <p>La somma di 2 e 3 è <?php echo somma(2, 3); ?></p> <!-- Output: La somma di 2 e 3 è 5 -->
</body>
</html>