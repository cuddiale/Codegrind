<!-- Crea una cartella templates e all'interno crea un file header.php e footer.php che contengono il codice HTML del tuo header e footer. Utilizza l'istruzione include per includere i file header.php e footer.php in diversi file del tuo progetto. -->

// index.php
<?php include 'templates/header.php'; ?>
<!DOCTYPE html>
<html>
<head>
    <title>Il mio sito web</title>
</head>
<body>
    <!-- Codice HTML -->
</body>
</html>
<?php include 'templates/footer.php'; ?>

// about.php
<?php include 'templates/header.php'; ?>
<!DOCTYPE html>
<html>
<head>
    <title>Chi siamo</title>
</head>
<body>
    <!-- Codice HTML -->
</body>
</html>
<?php include 'templates/footer.php'; ?>