<?php
require 'ExceptionNamespace.php';

use EccezioneNamespace\TestEccezione;
use EccezioneNamespace\EccezionePersonalizzata;

try {
    $test = new TestEccezione();
    $test->lanciaEccezione();
} catch (EccezionePersonalizzata $e) {
    echo $e->getMessage(); // Output: Errore personalizzato!
}
?>