<!-- Crea una funzione di utilità in un file utility.php e includi il file in un file index.php per utilizzare la funzione. -->

// utility.php
<?php
function saluta($nome) {
    echo "Ciao, $nome!";
}
?>

// index.php
<?php include 'utility.php'; ?>
<!DOCTYPE html>
<html>
<head>
    <title>Il mio sito web</title>
</head>
<body>
    <h1>Benvenuto</h1>
    <?php saluta('Mario'); ?> <!-- Output: Ciao, Mario! -->
</body>
</html>