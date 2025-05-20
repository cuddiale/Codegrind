<?php
namespace EccezioneNamespace;

class EccezionePersonalizzata extends \Exception {}

class TestEccezione {
    public function lanciaEccezione() {
        throw new EccezionePersonalizzata("Errore personalizzato!");
    }
}
?>