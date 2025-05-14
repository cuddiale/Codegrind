<!-- Crea un file database.php che si occupa di stabilire la connessione al database. Utilizza l'istruzione include_once per includere il file database.php in diversi file del tuo progetto. In questo modo, il file database.php verrà incluso solo una volta anche se viene richiamato più volte. -->

// index.php
<?php include_once 'database.php'; ?>
<!DOCTYPE html>
<html>
<head>
    <title>Il mio sito web</title>
</head>
<body>
    <!-- Codice HTML -->
</body>
</html>

// pagina1.php
<?php include_once 'database.php'; ?>
<!DOCTYPE html>
<html>
<head>
    <title>Pagina 1</title>
</head>
<body>
    <!-- Codice HTML -->
</body>
</html>