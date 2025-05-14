<!-- Crea una cartella components e all'interno crea un file navbar.php che contiene la barra di navigazione del tuo sito. Utilizza l'istruzione include per includere il file navbar.php in diversi file del tuo progetto. -->

// index.php
<?php include 'components/navbar.php'; ?>
<!DOCTYPE html>
<html>
<head>
    <title>Il mio sito web</title>
</head>
<body>
    <?php include 'components/navbar.php'; ?>
    <h1>Contenuto principale</h1>
    <p>Questo è il contenuto principale del mio sito web.</p>
    <?php include 'components/navbar.php'; ?>
</body>
</html>

// navbar.php
<nav>
    <ul>
        <li><a href="#">Home</a></li>
        <li><a href="#">Chi siamo</a></li>
        <li><a href="#">Contatti</a></li>
    </ul>
</nav>