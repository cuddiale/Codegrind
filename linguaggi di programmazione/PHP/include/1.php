<!-- Crea due file separati: header.php e footer.php. Utilizza l'istruzione include per includere il contenuto di entrambi i file in un file index.php. -->

<!DOCTYPE html>
<html>
<head>
    <title>Il mio sito web</title>
    <?php include 'header.php'; ?>
</head>
<body>
    <h1>Contenuto principale</h1>
    <p>Questo è il contenuto principale del mio sito web.</p>
    <?php include 'footer.php'; ?>
</body>
</html>

// header.php
<meta charset="UTF-8">
<link rel="stylesheet" href="style.css">

// footer.php
<footer>
    <p>© 2023 Il mio sito web</p>
</footer>