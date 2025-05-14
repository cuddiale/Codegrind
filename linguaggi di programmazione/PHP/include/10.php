<!-- Crea una cartella modules e all'interno crea diversi file che rappresentano i moduli del tuo sito. Utilizza l'istruzione include per includere i moduli richiesti in un file index.php in base alle necessità del tuo progetto. -->

// index.php
<!DOCTYPE html>
<html>
<head>
    <title>Il mio sito web</title>
</head>
<body>
    <?php include 'modules/navbar.php'; ?>
    <?php include 'modules/slider.php'; ?>
    <?php include 'modules/latest-news.php'; ?>
    <?php include 'modules/footer.php'; ?>
</body>
</html>