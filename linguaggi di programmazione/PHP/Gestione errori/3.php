<!-- Creare una classe di eccezione personalizzata e lanciarla in una funzione. -->

<?php
class EccezionePersonalizzata extends Exception {}

function verificaNumero($numero) {
    if ($numero > 10) {
        throw new EccezionePersonalizzata("Numero maggiore di 10.");
    }
    return true;
}

try {
    verificaNumero(15);
} catch (EccezionePersonalizzata $e) {
    echo "Errore: " . $e->getMessage(); // Output: Errore: Numero maggiore di 10.
}
?>