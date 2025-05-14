<!-- Creare una classe astratta "Esercizio" con un metodo astratto "esegui()". Creare una classe "EsercizioMatematico" che estende la classe astratta e implementa il metodo "esegui()" per eseguire un esercizio matematico. -->

<?php
abstract class Esercizio {
    abstract public function esegui();
}

class EsercizioMatematico extends Esercizio {
    public function esegui() {
        return 5 + 3; // Esempio di esercizio matematico
    }
}

$esercizio = new EsercizioMatematico();
echo "Risultato: " . $esercizio->esegui();
?>