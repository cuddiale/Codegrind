<!-- Scrivere un programma PHP che stampa il voto corrispondente a un punteggio (da 0 a 100) utilizzando l'istruzione "switch". -->

<?php
$punteggio = 85;

switch (true) {
    case ($punteggio >= 90 && $punteggio <= 100):
        echo "Voto: A";
        break;
    case ($punteggio >= 80 && $punteggio < 90):
        echo "Voto: B";
        break;
    case ($punteggio >= 70 && $punteggio < 80):
        echo "Voto: C";
        break;
    case ($punteggio >= 60 && $punteggio < 70):
        echo "Voto: D";
        break;
    case ($punteggio >= 0 && $punteggio < 60):
        echo "Voto: F";
        break;
    default:
        echo "Punteggio non valido";
}
?>